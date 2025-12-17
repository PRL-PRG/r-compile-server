fun main() {
  () -+> V { reg r:cls, reg hist:cls, reg women:*, reg women1:V, reg c:L, reg women3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg plot:cls, reg wwt:*, reg wwt1:V, reg p1:p(V +), reg r5:V, reg plot1:cls, reg wwt2:*, reg wwt3:V, reg p2:p(V +), reg r7:V, reg wwt4:*, reg wwt5:V, reg w2:*, reg w3:V, reg c1:L, reg w5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg r9:V, reg l:*, reg c2:L, reg r11:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg lines:cls, reg w6:*, reg w7:V, reg p3:p(V +), reg ifelse:cls, reg w8:*, reg w9:V, reg c3:L, reg w11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r16:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V |
    mkenv;
    r = clos inner3935177434;
    st `plot.histogram` = r;
    hist = ldf hist;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      c = `is.object`(women1);
      if c then L1() else L2(women1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", women1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(women3):
      r1 = `$`(women3, <sym weight>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn hist[, nclass, plot](p, 7.0, FALSE);
    check L1() else D1();
  D1():
    deopt 10 [r3];
  L1():
    st wwt = r3;
    plot = ldf plot;
    check L2() else D2();
  D2():
    deopt 13 [];
  L2():
    p1 = prom<V +>{
      wwt = ld wwt;
      wwt1 = force? wwt;
      checkMissing(wwt1);
      return wwt1;
    };
    r5 = dyn plot[, labels](p1, TRUE);
    check L3() else D3();
  D3():
    deopt 17 [r5];
  L3():
    plot1 = ldf plot;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    p2 = prom<V +>{
      wwt2 = ld wwt;
      wwt3 = force? wwt2;
      checkMissing(wwt3);
      return wwt3;
    };
    r7 = dyn plot1[, border, col, main, xlab](p2, "dark blue", "light blue", "Histogram of 15 women's weights", "weight [pounds]");
    check L5() else D5();
  D5():
    deopt 29 [r7];
  L5():
    wwt4 = ld wwt;
    check L6() else D6();
  D6():
    deopt 30 [wwt4];
  L6():
    wwt5 = force? wwt4;
    checkMissing(wwt5);
    st w2 = wwt5;
    w2 = ld w2;
    check L7() else D7();
  D7():
    deopt 33 [w2];
  L7():
    w3 = force? w2;
    checkMissing(w3);
    c1 = `is.object`(w3);
    if c1 then L9() else L10(w3);
  L8(dx3):
    r9 = `-`(dx3, 1.0);
    l = ld w2;
    c2 = `is.object`(l);
    if c2 then L13() else L14(r9, l);
  L9():
    dr2 = tryDispatchBuiltin.1("$", w3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(dr2);
  L10(w5):
    r8 = `$`(w5, <sym counts>);
    goto L8(r8);
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L12(dx5):
    st w2 = dx5;
    lines = ldf lines;
    check L16() else D8();
  L13():
    dr4 = tryDispatchBuiltin.0("$<-", l, r9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L15() else L14(r9, dr4);
  L14(r11, l2):
    r14 = `$<-`(l2, <sym counts>, r9);
    goto L12(r14);
  D8():
    deopt 42 [];
  L15():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L16():
    p3 = prom<V +>{
      w6 = ld w2;
      w7 = force? w6;
      checkMissing(w7);
      return w7;
    };
    p5 = prom<V +>{
      ifelse = ldf ifelse;
      p4 = prom<V +>{
        w8 = ld w2;
        w9 = force? w8;
        checkMissing(w9);
        c3 = `is.object`(w9);
        if c3 then L1() else L2(w9);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", w9);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(w11):
        r16 = `$`(w11, <sym counts>);
        goto L0(r16);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r18 = dyn ifelse(p4, "> 1", "1");
      return r18;
    };
    r20 = dyn lines[, col, labels](p3, "Midnight Blue", p5);
    check L17() else D9();
  D9():
    deopt 48 [r20];
  L17():
    popenv;
    return r20;
  }
}
fun inner3935177434(x, freq, density, angle, col, border, lty, main, sub, xlab, ylab, xlim, ylim, axes, labels, add, ann, `...`) {
  (reg x:*, reg freq:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg lty:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg xlim:*, reg ylim:*, reg axes:*, reg labels:*, reg add:*, reg ann:*, reg ddd:dots) -+> V { var x:*, var freq:*, reg freq_isMissing:L, reg freq_orDefault:*, reg equidist:*, reg equidist1:V, reg p:p(V +), var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, reg paste:cls, reg paste1:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p4:p(V +), var ylab:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg range:cls, reg r12:V, reg p5:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r16:V, reg c4:L, reg c5:L, reg x17:*, reg x18:V, reg c6:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r17:V, reg dx10:V, reg diff:cls, reg x21:*, reg x22:V, reg c7:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r18:V, reg p6:p(V +), reg r20:V, reg diff1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg h:*, reg h1:V, reg range1:cls, reg r23:V, reg p7:p(V +), reg r25:V, reg mean:cls, reg h2:*, reg h3:V, reg p8:p(V +), reg r27:V, reg r28:V, reg r29:V, reg freq1:*, reg freq2:V, reg c8:L, reg c10:V, reg equidist2:*, reg equidist3:V, reg r30:V, reg c11:L, reg c12:V, reg c14:L, reg warning:cls, reg r31:V, reg freq3:*, reg freq4:V, reg c15:L, reg x25:*, reg x26:V, reg c16:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r33:V, reg dx15:V, reg x29:*, reg x30:V, reg c17:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg x33:*, reg x34:V, reg c18:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r37:V, reg length:cls, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg y:*, reg y1:V, reg c19:V, reg c20:L, reg c21:V, reg nB:*, reg nB1:V, reg r41:V, reg c23:L, reg c24:V, reg c26:L, reg stop:cls, reg r42:V, reg dev_hold:cls, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg on_exit:cls, reg r47:V, reg add1:*, reg add2:V, reg r48:V, reg c27:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg ylim1:*, reg ylim2:V, reg c28:V, reg c29:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg y2:*, reg y3:V, reg range2:cls, reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg missing:cls, reg r57:V, reg c30:L, reg freq5:*, reg freq6:V, reg r58:V, reg c31:L, reg r59:S, reg plot_new:cls, reg r61:V, reg plot_window:cls, reg xlim1:*, reg xlim2:V, reg p9:p(V +), reg ylim3:*, reg ylim4:V, reg p10:p(V +), reg ddd1:dots?, reg r64:V, reg ann1:*, reg ann2:V, reg c32:L, reg title:cls, reg main1:*, reg main2:V, reg p11:p(V +), reg sub1:*, reg sub2:V, reg p12:p(V +), reg xlab1:*, reg xlab2:V, reg p13:p(V +), reg ylab1:*, reg ylab2:V, reg p14:p(V +), reg ddd2:dots?, reg r69:V, reg axes1:*, reg axes2:V, reg c33:L, reg axis:cls, reg ddd3:dots?, reg r71:V, reg axTicks:cls, reg r72:V, reg freq7:*, reg freq8:V, reg c34:L, reg c36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg c39:L, reg r74:V, reg yt:*, reg yt1:V, reg __:cls, reg r75:V, reg r76:V, reg any:cls, reg r77:V, reg c40:L, reg c41:V, reg c43:L, reg yt2:*, reg yt3:V, reg c44:L, reg yt5:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg ni:*, reg ni1:V, reg r78:V, reg __1:cls, reg r79:V, reg axis1:cls, reg yt6:*, reg yt7:V, reg p15:p(V +), reg ddd4:dots?, reg r81:V, reg r82:V, reg rect:cls, reg x37:*, reg x38:V, reg c45:L, reg x40:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg r84:V, reg c46:L, reg dx26:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg nB2:*, reg nB3:V, reg r85:V, reg __2:cls, reg r86:V, reg p16:p(V +), reg x41:*, reg x42:V, reg c47:L, reg x44:V, reg dr24:V, reg dc12:L, reg dx29:V, reg dx30:V, reg r88:V, reg c48:L, reg dx32:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg __3:cls, reg r89:V, reg p17:p(V +), reg y4:*, reg y5:V, reg p18:p(V +), reg col1:*, reg col2:V, reg p19:p(V +), reg border1:*, reg border2:V, reg p20:p(V +), reg angle1:*, reg angle2:V, reg p21:p(V +), reg density1:*, reg density2:V, reg p22:p(V +), reg lty1:*, reg lty2:V, reg p23:p(V +), reg r97:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r98:V, reg r99:V, reg labels1:*, reg labels2:V, reg c49:L, reg c50:L, reg c52:V, reg labels3:*, reg labels4:V, reg c53:L, reg c54:V, reg c56:L, reg c57:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r100:V, reg c61:L, reg r101:V, reg labels5:*, reg labels6:V, reg c62:L, reg c63:L, reg c64:V, reg c66:L, reg text:cls, reg x45:*, reg x46:V, reg c67:L, reg x48:V, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg r102:V, reg p24:p(V +), reg y6:*, reg y7:V, reg p25:p(V +), reg logl:*, reg logl1:V, reg c68:L, reg freq9:*, reg freq10:V, reg c69:L, reg x49:*, reg x50:V, reg c70:L, reg x52:V, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg r105:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r106:V, reg r107:V, reg round:cls, reg r108:V, reg labels7:*, reg labels8:V, reg p26:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r110:V, reg r111:V, reg c71:cls, reg r112:V, reg p27:p(V +), reg r114:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r116:V, reg r117:V, reg invisible:cls, reg r118:V |
    mkenv;
    st x = x;
    freq_isMissing = missing.0(freq);
    if freq_isMissing then L0() else L1(freq);
  L0():
    p = prom<V +>{
      equidist = ld equidist;
      equidist1 = force? equidist;
      checkMissing(equidist1);
      return equidist1;
    };
    goto L1(p);
  L1(freq_orDefault):
    st freq = freq_orDefault;
    density_isMissing = missing.0(density);
    if density_isMissing then L2(NULL) else L2(density);
  L2(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L3(45.0) else L3(angle);
  L3(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L4("lightgray") else L4(col);
  L4(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L5(NULL) else L5(border);
  L5(border_orDefault):
    st border = border_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L6(NULL) else L6(lty);
  L6(lty_orDefault):
    st lty = lty_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L7() else L8(main);
  L7():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        paste1 = ldf paste;
        p1 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          c = `is.object`(x2);
          if c then L1() else L2(x2);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", x2);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(x4):
          r1 = `$`(x4, <sym xname>);
          goto L0(r1);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r3 = dyn paste1[, collapse](p1, "\n");
        return r3;
      };
      r5 = dyn paste("Histogram of", p2);
      return r5;
    };
    goto L8(p3);
  L8(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L9(NULL) else L9(sub);
  L9(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L10() else L11(xlab);
  L10():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r7 = `$`(x8, <sym xname>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L11(p4);
  L11(xlab_orDefault):
    st xlab = xlab_orDefault;
    st ylab = ylab;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L12() else L13(xlim);
  L12():
    p5 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L4() else L5(x10);
    L2():
      r9 = dyn base(<lang `$`(x, breaks)>);
      goto L0(r9);
    L3(dx5):
      range = ldf range in base;
      r12 = dyn range(dx5);
      goto L0(r12);
    L4():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(x12):
      r11 = `$`(x12, <sym breaks>);
      goto L3(r11);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx4);
    };
    goto L13(p5);
  L13(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L14(NULL) else L14(ylim);
  L14(ylim_orDefault):
    st ylim = ylim_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L15(TRUE) else L15(axes);
  L15(axes_orDefault):
    st axes = axes_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L16(FALSE) else L16(labels);
  L16(labels_orDefault):
    st labels = labels_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L17(FALSE) else L17(add);
  L17(add_orDefault):
    st add = add_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L18(TRUE) else L18(ann);
  L18(ann_orDefault):
    st ann = ann_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L19(r15):
    c5 = `as.logical`(r15);
    if c5 then L67() else L20();
  L60():
    x13 = ld x;
    check L62() else D0();
  L61():
    r14 = dyn base1(<lang `$`(x, equidist)>);
    goto L19(r14);
  D0():
    deopt 1 [x13];
  L20():
    diff = ldf diff;
    check L74() else D2();
  L21(dx10):
    st equidist = dx10;
    freq1 = ld freq;
    check L80() else D8();
  L62():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L64() else L65(x14);
  L67():
    x17 = ld x;
    check L68() else D1();
  D1():
    deopt 5 [x17];
  D2():
    deopt 9 [];
  D8():
    deopt 24 [freq1];
  L63(dx7):
    c4 = `is.logical`(dx7);
    goto L19(c4);
  L64():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(dr6);
  L65(x16):
    r16 = `$`(x16, <sym equidist>);
    goto L63(r16);
  L68():
    x18 = force? x17;
    checkMissing(x18);
    c6 = `is.object`(x18);
    if c6 then L70() else L71(x18);
  L74():
    p6 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c7 = `is.object`(x22);
      if c7 then L1() else L2(x22);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x24):
      r18 = `$`(x24, <sym breaks>);
      goto L0(r18);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r20 = dyn diff(p6);
    check L75() else D3();
  L80():
    freq2 = force? freq1;
    checkMissing(freq2);
    c8 = `as.logical`(freq2);
    if c8 then L81() else L22(c8);
  D3():
    deopt 11 [r20];
  L22(c10):
    c14 = `as.logical`(c10);
    if c14 then L84() else L23();
  L66():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L63(dx6);
  L69(dx9):
    goto L21(dx9);
  L70():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L72() else L71(dr8);
  L71(x20):
    r17 = `$`(x20, <sym equidist>);
    goto L69(r17);
  L75():
    st h = r20;
    diff1 = ldf diff;
    check L76() else D4();
  L81():
    equidist2 = ld equidist;
    check L82() else D9();
  D4():
    deopt 14 [];
  D9():
    deopt 26 [c8, equidist2];
  L23():
    goto L24();
  L24():
    freq3 = ld freq;
    check L88() else D12();
  L72():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L69(dx8);
  L76():
    p7 = prom<V +>{
      sym2 = ldf range;
      base2 = ldf range in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      h = ld h;
      h1 = force? h;
      checkMissing(h1);
      range1 = ldf range in base;
      r23 = dyn range1(h1);
      goto L0(r23);
    L2():
      r21 = dyn base2(<sym h>);
      goto L0(r21);
    };
    r25 = dyn diff1(p7);
    check L77() else D5();
  L82():
    equidist3 = force? equidist2;
    checkMissing(equidist3);
    r30 = `!`(equidist3);
    c11 = `as.logical`(r30);
    c12 = `&&`(c8, c11);
    goto L22(c12);
  L84():
    warning = ldf warning;
    check L85() else D10();
  D5():
    deopt 16 [r25];
  D10():
    deopt 31 [];
  D12():
    deopt 36 [freq3];
  L77():
    mean = ldf mean;
    check L78() else D6();
  L85():
    r31 = dyn warning("the AREAS in the plot are wrong -- rather use 'freq = FALSE'");
    check L86() else D11();
  L88():
    freq4 = force? freq3;
    checkMissing(freq4);
    c15 = `as.logical`(freq4);
    if c15 then L89() else L25();
  D6():
    deopt 18 [r25, 1.0E-7];
  D11():
    deopt 33 [r31];
  L25():
    x29 = ld x;
    check L96() else D14();
  L26(dx15):
    st y = dx15;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L101() else L102();
  L78():
    p8 = prom<V +>{
      h2 = ld h;
      h3 = force? h2;
      checkMissing(h3);
      return h3;
    };
    r27 = dyn mean(p8);
    check L79() else D7();
  L86():
    goto L24();
  L89():
    x25 = ld x;
    check L90() else D13();
  D7():
    deopt 20 [r25, 1.0E-7, r27];
  D13():
    deopt 38 [x25];
  D14():
    deopt 41 [x29];
  L27(r36):
    st nB = r36;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L109() else L110();
  L79():
    r28 = `*`(1.0E-7, r27);
    r29 = `<`(r25, r28);
    goto L21(r29);
  L90():
    x26 = force? x25;
    checkMissing(x26);
    c16 = `is.object`(x26);
    if c16 then L92() else L93(x26);
  L96():
    x30 = force? x29;
    checkMissing(x30);
    c17 = `is.object`(x30);
    if c17 then L98() else L99(x30);
  L101():
    x33 = ld x;
    check L103() else D15();
  L102():
    r35 = dyn base3(<lang `$`(x, breaks)>);
    goto L27(r35);
  D15():
    deopt 47 [x33];
  L28(r40):
    c20 = `as.logical`(r40);
    if c20 then L29(c20) else L112();
  L91(dx14):
    goto L26(dx14);
  L92():
    dr12 = tryDispatchBuiltin.1("$", x26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L94() else L93(dr12);
  L93(x28):
    r33 = `$`(x28, <sym counts>);
    goto L91(r33);
  L97(dx17):
    goto L26(dx17);
  L98():
    dr14 = tryDispatchBuiltin.1("$", x30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L100() else L99(dr14);
  L99(x32):
    r34 = `$`(x32, <sym density>);
    goto L97(r34);
  L103():
    x34 = force? x33;
    checkMissing(x34);
    c18 = `is.object`(x34);
    if c18 then L105() else L106(x34);
  L109():
    y = ld y;
    check L111() else D17();
  L110():
    r39 = dyn base4(<sym y>);
    goto L28(r39);
  D17():
    deopt 54 [y];
  L29(c21):
    c26 = `as.logical`(c21);
    if c26 then L115() else L30();
  L94():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L91(dx13);
  L100():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L97(dx16);
  L104(dx19):
    length = ldf length in base;
    r38 = dyn length(dx19);
    check L108() else D16();
  L105():
    dr16 = tryDispatchBuiltin.1("$", x34);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L107() else L106(dr16);
  L106(x36):
    r37 = `$`(x36, <sym breaks>);
    goto L104(r37);
  L111():
    y1 = force? y;
    checkMissing(y1);
    c19 = `==`(y1, NULL);
    goto L28(c19);
  L112():
    nB = ld nB;
    check L113() else D18();
  D16():
    deopt 51 [r38];
  D18():
    deopt 58 [c20, 0, nB];
  L30():
    goto L31();
  L31():
    dev_hold = ldf `dev.hold`;
    check L119() else D21();
  L107():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L104(dx18);
  L108():
    goto L27(r38);
  L113():
    nB1 = force? nB;
    checkMissing(nB1);
    r41 = `==`(0, nB1);
    c23 = `as.logical`(r41);
    c24 = `||`(c20, c23);
    goto L29(c24);
  L115():
    stop = ldf stop;
    check L116() else D19();
  D19():
    deopt 63 [];
  D21():
    deopt 69 [];
  L116():
    r42 = dyn stop("'x' is wrongly structured");
    check L117() else D20();
  L119():
    r44 = dyn dev_hold();
    check L120() else D22();
  D20():
    deopt 65 [r42];
  D22():
    deopt 70 [r44];
  L117():
    goto L31();
  L120():
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L121() else L122();
  L32():
    add1 = ld add;
    check L123() else D23();
  L121():
    on_exit = ldf `on.exit` in base;
    r47 = dyn on_exit(<lang dev.flush()>);
    goto L32();
  L122():
    r45 = dyn base5(<lang dev.flush()>);
    goto L32();
  D23():
    deopt 74 [add1];
  L123():
    add2 = force? add1;
    checkMissing(add2);
    r48 = `!`(add2);
    c27 = `as.logical`(r48);
    if c27 then L124() else L33();
  L33():
    goto L52();
  L52():
    rect = ldf rect;
    check L175() else D48();
  L124():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L125() else L126();
  D48():
    deopt 179 [];
  L34(r50):
    c29 = `as.logical`(r50);
    if c29 then L128() else L35();
  L125():
    ylim1 = ld ylim;
    check L127() else D24();
  L126():
    r49 = dyn base6(<sym ylim>);
    goto L34(r49);
  L175():
    p16 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c45 = `is.object`(x38);
      if c45 then L2() else L3(x38);
    L1(dx24):
      c46 = `is.object`(dx24);
      if c46 then L5() else L6(dx24);
    L2():
      dr20 = tryDispatchBuiltin.1("$", x38);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(x40):
      r84 = `$`(x40, <sym breaks>);
      goto L1(r84);
    L0(dx28):
      return dx28;
    L4():
      dx23 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx23);
    L5():
      dr22 = tryDispatchBuiltin.1("[", dx24);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(dx26):
      nB2 = ld nB;
      nB3 = force? nB2;
      checkMissing(nB3);
      r85 = `-`(<missing>, nB3);
      __2 = ldf `[` in base;
      r86 = dyn __2(dx26, r85);
      goto L0(r86);
    L7():
      dx27 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx27);
    };
    p17 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c47 = `is.object`(x42);
      if c47 then L2() else L3(x42);
    L1(dx30):
      c48 = `is.object`(dx30);
      if c48 then L5() else L6(dx30);
    L2():
      dr24 = tryDispatchBuiltin.1("$", x42);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L4() else L3(dr24);
    L3(x44):
      r88 = `$`(x44, <sym breaks>);
      goto L1(r88);
    L0(dx34):
      return dx34;
    L4():
      dx29 = getTryDispatchBuiltinValue(dr24);
      goto L1(dx29);
    L5():
      dr26 = tryDispatchBuiltin.1("[", dx30);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L7() else L6(dr26);
    L6(dx32):
      __3 = ldf `[` in base;
      r89 = dyn __3(dx32, -1);
      goto L0(r89);
    L7():
      dx33 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx33);
    };
    p18 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p19 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p20 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    p21 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      return angle2;
    };
    p22 = prom<V +>{
      density1 = ld density;
      density2 = force? density1;
      checkMissing(density2);
      return density2;
    };
    p23 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    r97 = dyn rect[, , , , col, border, angle, density, lty](p16, 0.0, p17, p18, p19, p20, p21, p22, p23);
    check L176() else D49();
  D24():
    deopt 78 [ylim1];
  D49():
    deopt 194 [r97];
  L35():
    goto L37();
  L37():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L134() else L135();
  L127():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c28 = `==`(ylim2, NULL);
    goto L34(c28);
  L128():
    sym7 = ldf range;
    base7 = ldf range in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L129() else L130();
  L176():
    sym10 = ldf `is.logical`;
    base10 = ldf `is.logical` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L177() else L178();
  L36(r52):
    st ylim = r52;
    goto L37();
  L38(r56):
    c30 = `as.logical`(r56);
    if c30 then L136() else L39();
  L53(r99):
    c50 = `as.logical`(r99);
    if c50 then L180() else L54(c50);
  L129():
    y2 = ld y;
    check L131() else D25();
  L130():
    r51 = dyn base7(<sym y>, 0.0);
    goto L36(r51);
  L134():
    missing = ldf missing in base;
    r57 = dyn missing(<sym ylab>);
    goto L38(r57);
  L135():
    r55 = dyn base8(<sym ylab>);
    goto L38(r55);
  L177():
    labels1 = ld labels;
    check L179() else D50();
  L178():
    r98 = dyn base10(<sym labels>);
    goto L53(r98);
  D25():
    deopt 83 [y2];
  D50():
    deopt 196 [labels1];
  L39():
    goto L42();
  L42():
    plot_new = ldf `plot.new`;
    check L141() else D28();
  L54(c52):
    st logl = c52;
    c56 = `as.logical`(c52);
    if c56 then L55(c56) else L183();
  L131():
    y3 = force? y2;
    checkMissing(y3);
    range2 = ldf range in base;
    r53 = dyn range2(y3, 0.0);
    check L132() else D26();
  L136():
    freq5 = ld freq;
    check L137() else D27();
  L179():
    labels2 = force? labels1;
    checkMissing(labels2);
    c49 = `is.logical`(labels2);
    goto L53(c49);
  L180():
    labels3 = ld labels;
    check L181() else D51();
  D26():
    deopt 87 [r53];
  D27():
    deopt 94 [freq5];
  D28():
    deopt 105 [];
  D51():
    deopt 199 [c50, labels3];
  L55(c57):
    c66 = `as.logical`(c57);
    if c66 then L188() else L57();
  L132():
    goto L36(r53);
  L137():
    freq6 = force? freq5;
    checkMissing(freq6);
    r58 = `!`(freq6);
    c31 = `as.logical`(r58);
    if c31 then L138() else L40();
  L141():
    r61 = dyn plot_new();
    check L142() else D29();
  L181():
    labels4 = force? labels3;
    checkMissing(labels4);
    c53 = `as.logical`(labels4);
    c54 = `&&`(c50, c53);
    goto L54(c54);
  L183():
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L184() else L185();
  D29():
    deopt 106 [r61];
  L40():
    goto L41("Frequency");
  L41(r59):
    st ylab = r59;
    goto L42();
  L56(c61, r101):
    c63 = `as.logical`(r101);
    c64 = `||`(c61, c63);
    goto L55(c64);
  L57():
    goto L58();
  L58():
    sym14 = ldf invisible;
    base14 = ldf invisible in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L192() else L193();
  L138():
    goto L41("Density");
  L142():
    plot_window = ldf `plot.window`;
    check L143() else D30();
  L184():
    labels5 = ld labels;
    check L186() else D52();
  L185():
    r100 = dyn base11(<sym labels>);
    goto L56(c56, r100);
  L188():
    text = ldf text;
    check L189() else D53();
  D30():
    deopt 108 [];
  D52():
    deopt 204 [c56, labels5];
  D53():
    deopt 209 [];
  L59(r117):
    popenv;
    return r117;
  L143():
    p9 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p10 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    ddd1 = ld `...`;
    r64 = dyn plot_window[, , , `...`](p9, p10, "", ddd1);
    check L144() else D31();
  L186():
    labels6 = force? labels5;
    checkMissing(labels6);
    c62 = `is.character`(labels6);
    goto L56(c56, c62);
  L189():
    p24 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      c67 = `is.object`(x46);
      if c67 then L1() else L2(x46);
    L0(dx36):
      return dx36;
    L1():
      dr28 = tryDispatchBuiltin.1("$", x46);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(x48):
      r102 = `$`(x48, <sym mids>);
      goto L0(r102);
    L3():
      dx35 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx35);
    };
    p25 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p26 = prom<V +>{
      logl = ld logl;
      logl1 = force? logl;
      checkMissing(logl1);
      c68 = `as.logical`(logl1);
      if c68 then L3() else L0();
    L0():
      labels7 = ld labels;
      labels8 = force? labels7;
      checkMissing(labels8);
      return labels8;
    L3():
      freq9 = ld freq;
      freq10 = force? freq9;
      checkMissing(freq10);
      c69 = `as.logical`(freq10);
      if c69 then L4() else L1();
    L1():
      sym12 = ldf round;
      base12 = ldf round in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L10() else L11();
    L4():
      x49 = ld x;
      x50 = force? x49;
      checkMissing(x50);
      c70 = `is.object`(x50);
      if c70 then L6() else L7(x50);
    L2(r107):
      return r107;
    L5(dx38):
      return dx38;
    L6():
      dr30 = tryDispatchBuiltin.1("$", x50);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L8() else L7(dr30);
    L7(x52):
      r105 = `$`(x52, <sym counts>);
      goto L5(r105);
    L10():
      round = ldf round in base;
      r108 = dyn round(<lang `$`(x, density)>, 3.0);
      goto L2(r108);
    L11():
      r106 = dyn base12(<lang `$`(x, density)>, 3.0);
      goto L2(r106);
    L8():
      dx37 = getTryDispatchBuiltinValue(dr30);
      goto L5(dx37);
    };
    p27 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r111):
      return r111;
    L1():
      c71 = ldf c in base;
      r112 = dyn c71(0.5, -0.5);
      goto L0(r112);
    L2():
      r110 = dyn base13(0.5, <lang `-`(0.5)>);
      goto L0(r110);
    };
    r114 = dyn text[, , labels, adj](p24, p25, p26, p27);
    check L190() else D54();
  L192():
    invisible = ldf invisible in base;
    r118 = dyn invisible();
    check L194() else D55();
  L193():
    r116 = dyn base14();
    goto L59(r116);
  D31():
    deopt 113 [r64];
  D54():
    deopt 216 [r114];
  D55():
    deopt 222 [r118];
  L144():
    ann1 = ld ann;
    check L145() else D32();
  L190():
    goto L58();
  L194():
    goto L59(r118);
  D32():
    deopt 114 [ann1];
  L145():
    ann2 = force? ann1;
    checkMissing(ann2);
    c32 = `as.logical`(ann2);
    if c32 then L146() else L43();
  L43():
    goto L44();
  L44():
    axes1 = ld axes;
    check L150() else D35();
  L146():
    title = ldf title;
    check L147() else D33();
  D33():
    deopt 117 [];
  D35():
    deopt 130 [axes1];
  L147():
    p11 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p12 = prom<V +>{
      sub1 = ld sub;
      sub2 = force? sub1;
      checkMissing(sub2);
      return sub2;
    };
    p13 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p14 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd2 = ld `...`;
    r69 = dyn title[main, sub, xlab, ylab, `...`](p11, p12, p13, p14, ddd2);
    check L148() else D34();
  L150():
    axes2 = force? axes1;
    checkMissing(axes2);
    c33 = `as.logical`(axes2);
    if c33 then L151() else L45();
  D34():
    deopt 127 [r69];
  L45():
    goto L51(NULL);
  L51(r82):
    goto L52();
  L148():
    goto L44();
  L151():
    axis = ldf axis;
    check L152() else D36();
  D36():
    deopt 133 [];
  L152():
    ddd3 = ld `...`;
    r71 = dyn axis[, `...`](1.0, ddd3);
    check L153() else D37();
  D37():
    deopt 136 [r71];
  L153():
    axTicks = ldf axTicks;
    check L154() else D38();
  D38():
    deopt 138 [];
  L154():
    r72 = dyn axTicks(2.0);
    check L155() else D39();
  D39():
    deopt 140 [r72];
  L155():
    st yt = r72;
    freq7 = ld freq;
    check L156() else D40();
  D40():
    deopt 142 [freq7];
  L156():
    freq8 = force? freq7;
    checkMissing(freq8);
    c34 = `as.logical`(freq8);
    if c34 then L157() else L46(c34);
  L46(c36):
    c43 = `as.logical`(c36);
    if c43 then L164() else L48();
  L157():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L158() else L159();
  L47(c39, r74):
    c40 = `as.logical`(r74);
    c41 = `&&`(c39, c40);
    goto L46(c41);
  L48():
    goto L50();
  L50():
    axis1 = ldf axis;
    check L171() else D46();
  L158():
    yt = ld yt;
    check L160() else D41();
  L159():
    r73 = dyn base9(<lang `<-`(ni, `!=`(`(`(`%%`(yt, 1.0)), 0.0))>);
    goto L47(c34, r73);
  L164():
    yt2 = ld yt;
    check L165() else D44();
  D41():
    deopt 147 [c34, yt];
  D44():
    deopt 158 [yt2];
  D46():
    deopt 168 [];
  L160():
    yt1 = force? yt;
    checkMissing(yt1);
    __ = ldf `%%` in base;
    r75 = dyn __(yt1, 1.0);
    check L161() else D42();
  L165():
    yt3 = force? yt2;
    checkMissing(yt3);
    c44 = `is.object`(yt3);
    if c44 then L166() else L167(yt3);
  L171():
    p15 = prom<V +>{
      yt6 = ld yt;
      yt7 = force? yt6;
      checkMissing(yt7);
      return yt7;
    };
    ddd4 = ld `...`;
    r81 = dyn axis1[, at, `...`](2.0, p15, ddd4);
    check L172() else D47();
  D42():
    deopt 151 [c34, r75];
  D47():
    deopt 173 [r81];
  L49(dx21):
    st yt = dx21;
    goto L50();
  L161():
    r76 = `!=`(r75, 0.0);
    st ni = r76;
    any = ldf any in base;
    r77 = dyn any(r76);
    check L162() else D43();
  L166():
    dr18 = tryDispatchBuiltin.1("[", yt3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L168() else L167(dr18);
  L167(yt5):
    ni = ld ni;
    check L169() else D45();
  L172():
    goto L51(r81);
  D43():
    deopt 156 [c34, r77];
  D45():
    deopt 160 [yt5, ni];
  L162():
    goto L47(c34, r77);
  L168():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L49(dx20);
  L169():
    ni1 = force? ni;
    checkMissing(ni1);
    r78 = `!`(ni1);
    __1 = ldf `[` in base;
    r79 = dyn __1(yt5, r78);
    goto L49(r79);
  }
}