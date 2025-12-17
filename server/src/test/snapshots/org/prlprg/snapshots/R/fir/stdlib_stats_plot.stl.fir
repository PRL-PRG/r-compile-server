fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner602302601;
    st `plot.stl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner602302601(x, labels, `set.pars`, main, `range.bars`, `...`, `col.range`) {
  (reg x:*, reg labels:*, reg set_pars:*, reg main:*, reg range_bars:*, reg ddd:dots, reg col_range:*) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg colnames:cls, reg X:*, reg X1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `set.pars`:*, reg set_pars_isMissing:L, reg set_pars_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg nplot:*, reg nplot1:V, reg c2:cls, reg r13:V, reg list:cls, reg r14:V, reg p2:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, var `range.bars`:*, reg range_bars_isMissing:L, reg range_bars_orDefault:*, var `...`:dots?, var `col.range`:*, reg col_range_isMissing:L, reg col_range_orDefault:*, reg x1:*, reg x2:V, reg c3:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg ncol:cls, reg sers:*, reg sers1:V, reg p3:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sers2:*, reg sers3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg rep:cls, reg r23:V, reg ___:cls, reg r24:V, reg drop:cls, reg r25:V, reg cbind:cls, reg data:*, reg data1:V, reg p4:p(V +), reg sers4:*, reg sers5:V, reg p5:p(V +), reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg colnames1:cls, reg sers6:*, reg sers7:V, reg p6:p(V +), reg r32:V, reg c4:cls, reg r33:V, reg l:*, reg colnames__:cls, reg r34:V, reg ncomp:*, reg ncomp1:V, reg r35:V, reg range_bars1:*, reg range_bars2:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg apply:cls, reg apply1:cls, reg X2:*, reg X3:V, reg p7:p(V +), reg range:*, reg range1:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg diff:*, reg diff1:V, reg p10:p(V +), reg r43:V, reg min:cls, reg r44:V, reg dev_hold:cls, reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg on_exit:cls, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg set_pars1:*, reg set_pars2:V, reg length:cls, reg r52:V, reg c6:L, reg do_call:cls, reg as_list:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg set_pars3:*, reg set_pars4:V, reg names:cls, reg r55:V, reg p11:p(V +), reg r57:V, reg p12:p(V +), reg r59:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg on_exit1:cls, reg r62:V, reg do_call1:cls, reg set_pars5:*, reg set_pars6:V, reg p13:p(V +), reg r64:V, reg nplot2:*, reg nplot3:V, reg r66:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x5:V, reg plot:cls, reg X4:*, reg X5:V, reg c8:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __:cls, reg r67:V, reg p14:p(V +), reg i7:*, reg i8:V, reg nplot4:*, reg nplot5:V, reg r69:V, reg c9:L, reg p15:p(V +), reg ddd1:dots?, reg r71:V, reg range_bars3:*, reg range_bars4:V, reg c10:L, reg diff2:cls, reg par:cls, reg r72:V, reg c11:L, reg r74:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r75:V, reg p16:p(V +), reg r77:V, reg r78:V, reg mean:cls, reg rx:*, reg rx1:V, reg c12:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i11:*, reg i12:V, reg __2:cls, reg r79:V, reg p17:p(V +), reg r81:V, reg rect:cls, reg ux:*, reg ux1:V, reg c13:L, reg ux3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r82:V, reg dx10:*, reg dx11:V, reg r83:V, reg p18:p(V +), reg y:*, reg y1:V, reg mx:*, reg mx1:V, reg r85:V, reg r86:V, reg p19:p(V +), reg ux4:*, reg ux5:V, reg c14:L, reg ux7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r88:V, reg dx14:*, reg dx15:V, reg r89:V, reg r90:V, reg p20:p(V +), reg y2:*, reg y3:V, reg mx2:*, reg mx3:V, reg r92:V, reg r93:V, reg p21:p(V +), reg col_range1:*, reg col_range2:V, reg p22:p(V +), reg r96:V, reg i13:I, reg i14:*, reg i15:V, reg r98:V, reg c15:L, reg i17:I, reg c17:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r99:V, reg i20:I, reg c20:L, reg r100:V, reg main1:*, reg main2:V, reg c21:V, reg r101:V, reg c22:L, reg c23:V, reg c25:L, reg title:cls, reg main3:*, reg main4:V, reg p23:p(V +), reg par1:cls, reg r103:V, reg c26:L, reg r105:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r106:V, reg r107:V, reg p24:p(V +), reg r109:V, reg i24:I, reg i25:*, reg i26:V, reg nplot6:*, reg nplot7:V, reg r111:V, reg c27:L, reg abline:cls, reg r112:V, reg i29:I, reg box:cls, reg r114:V, reg i30:*, reg i31:V, reg __6:cls, reg r115:V, reg r116:V, reg axis:cls, reg right:*, reg right1:V, reg r117:V, reg p25:p(V +), reg r119:V, reg axis1:cls, reg right2:*, reg right3:V, reg p26:p(V +), reg r121:V, reg axis2:cls, reg i32:*, reg i33:V, reg nplot8:*, reg nplot9:V, reg r122:V, reg p27:p(V +), reg r124:V, reg mtext:cls, reg labels1:*, reg labels2:V, reg c28:L, reg labels4:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg i34:*, reg i35:V, reg __7:cls, reg r125:V, reg p28:p(V +), reg r127:V, reg mtext1:cls, reg r128:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r129:V, reg r130:V, reg invisible:cls, reg r131:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0() else L1(labels);
  L0():
    p1 = prom<V +>{
      colnames = ldf colnames;
      p = prom<V +>{
        X = ld X;
        X1 = force? X;
        checkMissing(X1);
        return X1;
      };
      r1 = dyn colnames(p);
      return r1;
    };
    goto L1(p1);
  L1(labels_orDefault):
    st labels = labels_orDefault;
    set_pars_isMissing = missing.0(set_pars);
    if set_pars_isMissing then L2() else L3(set_pars);
  L2():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r4):
      return r4;
    L4():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L5():
      r3 = dyn base[mar, oma, tck, mfrow](<lang c(0.0, 6.0, 0.0, 6.0)>, <lang c(6.0, 0.0, 4.0, 0.0)>, <lang `-`(0.01)>, <lang c(nplot, 1.0)>);
      goto L0(r3);
    L1(r6):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L6():
      c = ldf c in base;
      r7 = dyn c(0.0, 6.0, 0.0, 6.0);
      goto L1(r7);
    L7():
      r5 = dyn base1(0.0, 6.0, 0.0, 6.0);
      goto L1(r5);
    L2(r9):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L10() else L11();
    L8():
      c1 = ldf c in base;
      r10 = dyn c1(6.0, 0.0, 4.0, 0.0);
      goto L2(r10);
    L9():
      r8 = dyn base2(6.0, 0.0, 4.0, 0.0);
      goto L2(r8);
    L3(r12):
      list = ldf list in base;
      r14 = dyn list(r6, r9, -0.01, r12);
      goto L0(r14);
    L10():
      nplot = ld nplot;
      nplot1 = force? nplot;
      checkMissing(nplot1);
      c2 = ldf c in base;
      r13 = dyn c2(nplot1, 1.0);
      goto L3(r13);
    L11():
      r11 = dyn base3(<sym nplot>, 1.0);
      goto L3(r11);
    };
    goto L3(p2);
  L3(set_pars_orDefault):
    st `set.pars` = set_pars_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L4(NULL) else L4(main);
  L4(main_orDefault):
    st main = main_orDefault;
    range_bars_isMissing = missing.0(range_bars);
    if range_bars_isMissing then L5(TRUE) else L5(range_bars);
  L5(range_bars_orDefault):
    st `range.bars` = range_bars_orDefault;
    st `...` = ddd;
    col_range_isMissing = missing.0(col_range);
    if col_range_isMissing then L6("light gray") else L6(col_range);
  L6(col_range_orDefault):
    st `col.range` = col_range_orDefault;
    x1 = ld x;
    check L29() else D0();
  D0():
    deopt 0 [x1];
  L29():
    x2 = force? x1;
    checkMissing(x2);
    c3 = `is.object`(x2);
    if c3 then L31() else L32(x2);
  L30(dx1):
    st sers = dx1;
    ncol = ldf ncol;
    check L34() else D1();
  L31():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(x4):
    r16 = `$`(x4, <sym time.series>);
    goto L30(r16);
  D1():
    deopt 5 [];
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L34():
    p3 = prom<V +>{
      sers = ld sers;
      sers1 = force? sers;
      checkMissing(sers1);
      return sers1;
    };
    r18 = dyn ncol(p3);
    check L35() else D2();
  D2():
    deopt 7 [r18];
  L35():
    st ncomp = r18;
    sym4 = ldf drop;
    base4 = ldf drop in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L7(r20):
    st data = r20;
    cbind = ldf cbind;
    check L43() else D6();
  L36():
    sers2 = ld sers;
    check L38() else D3();
  L37():
    r19 = dyn base4(<lang `%*%`(sers, rep(1.0, ncomp))>);
    goto L7(r19);
  D3():
    deopt 12 [sers2];
  D6():
    deopt 23 [];
  L38():
    sers3 = force? sers2;
    checkMissing(sers3);
    sym5 = ldf rep;
    base5 = ldf rep in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L43():
    p4 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      return data1;
    };
    p5 = prom<V +>{
      sers4 = ld sers;
      sers5 = force? sers4;
      checkMissing(sers5);
      return sers5;
    };
    r28 = dyn cbind(p4, p5);
    check L44() else D7();
  D7():
    deopt 26 [r28];
  L8(r22):
    ___ = ldf `%*%` in base;
    r24 = dyn ___(sers3, r22);
    check L41() else D4();
  L39():
    rep = ldf rep in base;
    r23 = dyn rep(1.0, <sym ncomp>);
    goto L8(r23);
  L40():
    r21 = dyn base5(1.0, <sym ncomp>);
    goto L8(r21);
  L44():
    st X = r28;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L45() else L46();
  D4():
    deopt 18 [r24];
  L9(r30):
    l = ld X;
    colnames__ = ldf `colnames<-`;
    check L50() else D11();
  L41():
    drop = ldf drop in base;
    r25 = dyn drop(r24);
    check L42() else D5();
  L45():
    colnames1 = ldf colnames;
    check L47() else D8();
  L46():
    r29 = dyn base6("data", <lang colnames(sers)>);
    goto L9(r29);
  D5():
    deopt 20 [r25];
  D8():
    deopt 32 [];
  D11():
    deopt 38 [r30, l, r30];
  L42():
    goto L7(r25);
  L47():
    p6 = prom<V +>{
      sers6 = ld sers;
      sers7 = force? sers6;
      checkMissing(sers7);
      return sers7;
    };
    r32 = dyn colnames1(p6);
    check L48() else D9();
  L50():
    r34 = dyn colnames__(l, NULL, r30);
    check L51() else D12();
  D9():
    deopt 34 [r32];
  D12():
    deopt 40 [r30, r34];
  L48():
    c4 = ldf c in base;
    r33 = dyn c4("data", r32);
    check L49() else D10();
  L51():
    st X = r34;
    ncomp = ld ncomp;
    check L52() else D13();
  D10():
    deopt 36 [r33];
  D13():
    deopt 42 [ncomp];
  L49():
    goto L9(r33);
  L52():
    ncomp1 = force? ncomp;
    checkMissing(ncomp1);
    r35 = `+`(ncomp1, 1.0);
    st nplot = r35;
    range_bars1 = ld `range.bars`;
    check L53() else D14();
  D14():
    deopt 47 [range_bars1];
  L53():
    range_bars2 = force? range_bars1;
    checkMissing(range_bars2);
    c5 = `as.logical`(range_bars2);
    if c5 then L54() else L10();
  L10():
    goto L12();
  L12():
    dev_hold = ldf `dev.hold`;
    check L61() else D18();
  L54():
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  D18():
    deopt 63 [];
  L11(r37):
    st mx = r37;
    goto L12();
  L55():
    apply = ldf apply;
    check L57() else D15();
  L56():
    r36 = dyn base7(<lang apply(`<-`(rx, apply(X, 2.0, range)), 2.0, diff)>);
    goto L11(r36);
  L61():
    r46 = dyn dev_hold();
    check L62() else D19();
  D15():
    deopt 52 [];
  D19():
    deopt 64 [r46];
  L57():
    p9 = prom<V +>{
      apply1 = ldf apply;
      p7 = prom<V +>{
        X2 = ld X;
        X3 = force? X2;
        checkMissing(X3);
        return X3;
      };
      p8 = prom<V +>{
        range = ld range;
        range1 = force? range;
        checkMissing(range1);
        return range1;
      };
      r40 = dyn apply1(p7, 2.0, p8);
      st rx = r40;
      invisible.0();
      return r40;
    };
    p10 = prom<V +>{
      diff = ld diff;
      diff1 = force? diff;
      checkMissing(diff1);
      return diff1;
    };
    r43 = dyn apply(p9, 2.0, p10);
    check L58() else D16();
  L62():
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L63() else L64();
  D16():
    deopt 56 [r43];
  L13():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L65() else L66();
  L58():
    min = ldf min in base;
    r44 = dyn min(r43);
    check L59() else D17();
  L63():
    on_exit = ldf `on.exit` in base;
    r49 = dyn on_exit(<lang dev.flush()>);
    goto L13();
  L64():
    r47 = dyn base8(<lang dev.flush()>);
    goto L13();
  D17():
    deopt 58 [r44];
  L14(r51):
    c6 = `as.logical`(r51);
    if c6 then L69() else L15();
  L59():
    goto L11(r44);
  L65():
    set_pars1 = ld `set.pars`;
    check L67() else D20();
  L66():
    r50 = dyn base9(<sym set.pars>);
    goto L14(r50);
  D20():
    deopt 70 [set_pars1];
  L15():
    goto L17();
  L17():
    nplot2 = ld nplot;
    check L77() else D26();
  L67():
    set_pars2 = force? set_pars1;
    checkMissing(set_pars2);
    length = ldf length in base;
    r52 = dyn length(set_pars2);
    check L68() else D21();
  L69():
    do_call = ldf `do.call`;
    check L70() else D22();
  D21():
    deopt 73 [r52];
  D22():
    deopt 75 [];
  D26():
    deopt 91 [1, nplot2];
  L68():
    goto L14(r52);
  L70():
    p12 = prom<V +>{
      as_list = ldf `as.list`;
      p11 = prom<V +>{
        sym10 = ldf names;
        base10 = ldf names in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r54):
        return r54;
      L1():
        set_pars3 = ld `set.pars`;
        set_pars4 = force? set_pars3;
        checkMissing(set_pars4);
        names = ldf names in base;
        r55 = dyn names(set_pars4);
        goto L0(r55);
      L2():
        r53 = dyn base10(<sym set.pars>);
        goto L0(r53);
      };
      r57 = dyn as_list(p11);
      return r57;
    };
    r59 = dyn do_call("par", p12);
    check L71() else D23();
  L77():
    nplot3 = force? nplot2;
    checkMissing(nplot3);
    r66 = `:`(1, nplot3);
    s = toForSeq(r66);
    l1 = length(s);
    i = 0;
    goto L18(i);
  D23():
    deopt 78 [r59];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l1, i2);
    if c7 then L78() else L27();
  L71():
    st oldpar = r59;
    sym11 = ldf `on.exit`;
    base11 = ldf `on.exit` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L72() else L73();
  L16():
    do_call1 = ldf `do.call`;
    check L74() else D24();
  L27():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    plot = ldf plot;
    check L79() else D27();
  L72():
    on_exit1 = ldf `on.exit` in base;
    r62 = dyn on_exit1(<lang par(oldpar)>, TRUE);
    goto L16();
  L73():
    r60 = dyn base11[, add](<lang par(oldpar)>, TRUE);
    goto L16();
  L78():
    mtext1 = ldf mtext;
    check L118() else D56();
  D24():
    deopt 84 [];
  D27():
    deopt 95 [i2];
  D56():
    deopt 206 [];
  L74():
    p13 = prom<V +>{
      set_pars5 = ld `set.pars`;
      set_pars6 = force? set_pars5;
      checkMissing(set_pars6);
      return set_pars6;
    };
    r64 = dyn do_call1("par", p13);
    check L75() else D25();
  L79():
    p14 = prom<V +>{
      X4 = ld X;
      X5 = force? X4;
      checkMissing(X5);
      c8 = `is.object`(X5);
      if c8 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", X5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r67 = dyn __(X5, <missing>, i6);
      goto L0(r67);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p15 = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      nplot4 = ld nplot;
      nplot5 = force? nplot4;
      checkMissing(nplot5);
      r69 = `<`(i8, nplot5);
      c9 = `as.logical`(r69);
      if c9 then L1() else L0();
    L0():
      return "h";
    L1():
      return "l";
    };
    ddd1 = ld `...`;
    r71 = dyn plot[, type, xlab, ylab, axes, `...`](p14, p15, "", "", FALSE, ddd1);
    check L80() else D28();
  L118():
    r128 = dyn mtext1[, side, line]("time", 1.0, 3.0);
    check L119() else D57();
  D25():
    deopt 87 [r64];
  D28():
    deopt 106 [i2, r71];
  D57():
    deopt 212 [r128];
  L75():
    goto L17();
  L80():
    range_bars3 = ld `range.bars`;
    check L81() else D29();
  L119():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L120() else L121();
  D29():
    deopt 107 [i2, range_bars3];
  L28(r130):
    popenv;
    return r130;
  L81():
    range_bars4 = force? range_bars3;
    checkMissing(range_bars4);
    c10 = `as.logical`(range_bars4);
    if c10 then L82() else L19();
  L120():
    invisible = ldf invisible in base;
    r131 = dyn invisible();
    check L122() else D58();
  L121():
    r129 = dyn base13();
    goto L28(r129);
  D58():
    deopt 216 [r131];
  L19():
    goto L20(i2);
  L20(i13):
    i14 = ld i;
    check L90() else D36();
  L82():
    diff2 = ldf diff;
    check L83() else D30();
  L122():
    goto L28(r131);
  D30():
    deopt 111 [i2, 0.015625];
  D36():
    deopt 134 [i13, i14];
  L83():
    p16 = prom<V +>{
      par = ldf par;
      r72 = dyn par("usr");
      c11 = `is.object`(r72);
      if c11 then L1() else L2(r72);
    L0(dx5):
      st ux = dx5;
      invisible.0();
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r72);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r74):
      __1 = ldf `[` in base;
      r75 = dyn __1(r74, <int 1, 2>);
      goto L0(r75);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r77 = dyn diff2(p16);
    check L84() else D31();
  L90():
    i15 = force? i14;
    checkMissing(i15);
    r98 = `==`(i15, 1.0);
    c15 = `as.logical`(r98);
    if c15 then L91() else L21(i13, c15);
  D31():
    deopt 113 [i2, 0.015625, r77];
  L21(i17, c17):
    c25 = `as.logical`(c17);
    if c25 then L96() else L23();
  L84():
    r78 = `*`(0.015625, r77);
    st dx = r78;
    mean = ldf mean;
    check L85() else D32();
  L91():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L92() else L93();
  D32():
    deopt 117 [i2];
  L22(i20, c20, r100):
    r101 = `!`(r100);
    c22 = `as.logical`(r101);
    c23 = `&&`(c20, c22);
    goto L21(i20, c23);
  L23():
    goto L24(i17);
  L24(i24):
    i25 = ld i;
    check L100() else D40();
  L85():
    p17 = prom<V +>{
      rx = ld rx;
      rx1 = force? rx;
      checkMissing(rx1);
      c12 = `is.object`(rx1);
      if c12 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", rx1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      i11 = ld i;
      i12 = force? i11;
      __2 = ldf `[` in base;
      r79 = dyn __2(rx1, <missing>, i12);
      goto L0(r79);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r81 = dyn mean(p17);
    check L86() else D33();
  L92():
    main1 = ld main;
    check L94() else D37();
  L93():
    r99 = dyn base12(<sym main>);
    goto L22(i13, c15, r99);
  L96():
    title = ldf title;
    check L97() else D38();
  D33():
    deopt 119 [i2, r81];
  D37():
    deopt 139 [i13, c15, main1];
  D38():
    deopt 145 [i17];
  D40():
    deopt 154 [i24, i25];
  L86():
    st y = r81;
    rect = ldf rect;
    check L87() else D34();
  L94():
    main2 = force? main1;
    checkMissing(main2);
    c21 = `==`(main2, NULL);
    goto L22(i13, c15, c21);
  L97():
    p23 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p24 = prom<V +>{
      par1 = ldf par;
      r103 = dyn par1("oma");
      c26 = `is.object`(r103);
      if c26 then L1() else L2(r103);
    L0(dx17):
      r107 = `>`(dx17, 0.0);
      return r107;
    L1():
      dr12 = tryDispatchBuiltin.1("[", r103);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(r105):
      __5 = ldf `[` in base;
      r106 = dyn __5(r105, 3);
      goto L0(r106);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r109 = dyn title[, line, outer](p23, 2.0, p24);
    check L98() else D39();
  L100():
    i26 = force? i25;
    checkMissing(i26);
    nplot6 = ld nplot;
    check L101() else D41();
  D34():
    deopt 122 [i2];
  D39():
    deopt 151 [i17, r109];
  D41():
    deopt 155 [i24, i26, nplot6];
  L87():
    p18 = prom<V +>{
      ux = ld ux;
      ux1 = force? ux;
      checkMissing(ux1);
      c13 = `is.object`(ux1);
      if c13 then L1() else L2(ux1);
    L0(dx9):
      dx10 = ld dx;
      dx11 = force? dx10;
      checkMissing(dx11);
      r83 = `-`(dx9, dx11);
      return r83;
    L1():
      dr8 = tryDispatchBuiltin.1("[", ux1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(ux3):
      __3 = ldf `[` in base;
      r82 = dyn __3(ux3, 2);
      goto L0(r82);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p19 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      mx = ld mx;
      mx1 = force? mx;
      checkMissing(mx1);
      r85 = `/`(mx1, 2.0);
      r86 = `+`(y1, r85);
      return r86;
    };
    p20 = prom<V +>{
      ux4 = ld ux;
      ux5 = force? ux4;
      checkMissing(ux5);
      c14 = `is.object`(ux5);
      if c14 then L1() else L2(ux5);
    L0(dx13):
      dx14 = ld dx;
      dx15 = force? dx14;
      checkMissing(dx15);
      r89 = `*`(0.4, dx15);
      r90 = `-`(dx13, r89);
      return r90;
    L1():
      dr10 = tryDispatchBuiltin.1("[", ux5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(ux7):
      __4 = ldf `[` in base;
      r88 = dyn __4(ux7, 2);
      goto L0(r88);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    p21 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      mx2 = ld mx;
      mx3 = force? mx2;
      checkMissing(mx3);
      r92 = `/`(mx3, 2.0);
      r93 = `-`(y3, r92);
      return r93;
    };
    p22 = prom<V +>{
      col_range1 = ld `col.range`;
      col_range2 = force? col_range1;
      checkMissing(col_range2);
      return col_range2;
    };
    r96 = dyn rect[, , , , col, xpd](p18, p19, p20, p21, p22, TRUE);
    check L88() else D35();
  L98():
    goto L24(i17);
  L101():
    nplot7 = force? nplot6;
    checkMissing(nplot7);
    r111 = `==`(i26, nplot7);
    c27 = `as.logical`(r111);
    if c27 then L102() else L25();
  D35():
    deopt 131 [i2, r96];
  L25():
    goto L26(i24);
  L26(i29):
    box = ldf box;
    check L106() else D44();
  L88():
    goto L20(i2);
  L102():
    abline = ldf abline;
    check L103() else D42();
  D42():
    deopt 159 [i24];
  D44():
    deopt 166 [i29];
  L103():
    r112 = dyn abline[h](0.0);
    check L104() else D43();
  L106():
    r114 = dyn box();
    check L107() else D45();
  D43():
    deopt 162 [i24, r112];
  D45():
    deopt 167 [i29, r114];
  L104():
    goto L26(i24);
  L107():
    i30 = ld i;
    check L108() else D46();
  D46():
    deopt 169 [i29, i30];
  L108():
    i31 = force? i30;
    checkMissing(i31);
    __6 = ldf `%%` in base;
    r115 = dyn __6(i31, 2.0);
    check L109() else D47();
  D47():
    deopt 173 [i29, r115];
  L109():
    r116 = `==`(r115, 0.0);
    st right = r116;
    axis = ldf axis;
    check L110() else D48();
  D48():
    deopt 178 [i29];
  L110():
    p25 = prom<V +>{
      right = ld right;
      right1 = force? right;
      checkMissing(right1);
      r117 = `!`(right1);
      return r117;
    };
    r119 = dyn axis[, labels](2.0, p25);
    check L111() else D49();
  D49():
    deopt 182 [i29, r119];
  L111():
    axis1 = ldf axis;
    check L112() else D50();
  D50():
    deopt 184 [i29];
  L112():
    p26 = prom<V +>{
      right2 = ld right;
      right3 = force? right2;
      checkMissing(right3);
      return right3;
    };
    r121 = dyn axis1[, labels](4.0, p26);
    check L113() else D51();
  D51():
    deopt 188 [i29, r121];
  L113():
    axis2 = ldf axis;
    check L114() else D52();
  D52():
    deopt 190 [i29];
  L114():
    p27 = prom<V +>{
      i32 = ld i;
      i33 = force? i32;
      checkMissing(i33);
      nplot8 = ld nplot;
      nplot9 = force? nplot8;
      checkMissing(nplot9);
      r122 = `==`(i33, nplot9);
      return r122;
    };
    r124 = dyn axis2[, labels](1.0, p27);
    check L115() else D53();
  D53():
    deopt 194 [i29, r124];
  L115():
    mtext = ldf mtext;
    check L116() else D54();
  D54():
    deopt 196 [i29];
  L116():
    p28 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      c28 = `is.object`(labels2);
      if c28 then L1() else L2(labels2);
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("[", labels2);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(labels4):
      i34 = ld i;
      i35 = force? i34;
      __7 = ldf `[` in base;
      r125 = dyn __7(labels4, i35);
      goto L0(r125);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    r127 = dyn mtext[, side, ](p28, 2.0, 3.0);
    check L117() else D55();
  D55():
    deopt 201 [i29, r127];
  L117():
    goto L18(i29);
  }
}