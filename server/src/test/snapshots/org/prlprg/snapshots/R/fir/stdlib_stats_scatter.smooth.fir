fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg with:cls, reg cars:*, reg cars1:V, reg p1:p(V +), reg scatter_smooth:cls, reg speed:*, reg speed1:V, reg p2:p(V +), reg dist:*, reg dist1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg with1:cls, reg cars2:*, reg cars3:V, reg p5:p(V +), reg scatter_smooth1:cls, reg speed2:*, reg speed3:V, reg p6:p(V +), reg dist2:*, reg dist3:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg list:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V |
    mkenv;
    r = clos inner209212952;
    st `scatter.smooth` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    sym2 = ldf with;
    base2 = ldf with in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    with = ldf with;
    check L9() else D2();
  L8():
    r5 = dyn base1(<sym cars>, <lang scatter.smooth(speed, dist)>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  L2(r14):
    popenv;
    return r14;
  L6():
    goto L0();
  L9():
    p1 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    p4 = prom<V +>{
      scatter_smooth = ldf `scatter.smooth`;
      p2 = prom<V +>{
        speed = ld speed;
        speed1 = force? speed;
        checkMissing(speed1);
        return speed1;
      };
      p3 = prom<V +>{
        dist = ld dist;
        dist1 = force? dist;
        checkMissing(dist1);
        return dist1;
      };
      r10 = dyn scatter_smooth(p2, p3);
      return r10;
    };
    r12 = dyn with(p1, p4);
    check L10() else D3();
  L11():
    with1 = ldf with;
    check L13() else D4();
  L12():
    r13 = dyn base2(<sym cars>, <lang scatter.smooth(speed, dist, lpars=list(col="red", lwd=3.0, lty=3.0))>);
    goto L2(r13);
  D3():
    deopt 13 [r12];
  D4():
    deopt 16 [];
  L10():
    goto L1();
  L13():
    p5 = prom<V +>{
      cars2 = ld cars;
      cars3 = force? cars2;
      checkMissing(cars3);
      return cars3;
    };
    p9 = prom<V +>{
      scatter_smooth1 = ldf `scatter.smooth`;
      p6 = prom<V +>{
        speed2 = ld speed;
        speed3 = force? speed2;
        checkMissing(speed3);
        return speed3;
      };
      p7 = prom<V +>{
        dist2 = ld dist;
        dist3 = force? dist2;
        checkMissing(dist3);
        return dist3;
      };
      p8 = prom<V +>{
        sym3 = ldf list;
        base3 = ldf list in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r19):
        return r19;
      L1():
        list = ldf list in base;
        r20 = dyn list("red", 3.0, 3.0);
        goto L0(r20);
      L2():
        r18 = dyn base3[col, lwd, lty]("red", 3.0, 3.0);
        goto L0(r18);
      };
      r22 = dyn scatter_smooth1[, , lpars](p6, p7, p8);
      return r22;
    };
    r24 = dyn with1(p5, p9);
    check L14() else D5();
  D5():
    deopt 19 [r24];
  L14():
    goto L2(r24);
  }
}
fun inner209212952(x, y, span, degree, family, xlab, ylab, ylim, evaluation, `...`, lpars) {
  (reg x:*, reg y:*, reg span:*, reg degree:*, reg family:*, reg xlab:*, reg ylab:*, reg ylim:*, reg evaluation:*, reg ddd:dots, reg lpars:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var span:*, reg span_isMissing:L, reg span_orDefault:*, reg p:p(V +), var degree:*, reg degree_isMissing:L, reg degree_orDefault:*, var family:*, reg family_isMissing:L, reg family_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg y1:*, reg y2:V, reg pred:*, reg pred1:V, reg c1:L, reg pred3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg range:cls, reg r8:V, reg p2:p(V +), var evaluation:*, reg evaluation_isMissing:L, reg evaluation_orDefault:*, var `...`:dots?, var lpars:*, reg lpars_isMissing:L, reg lpars_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg list:cls, reg r12:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg r17:V, reg c2:L, reg deparse1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg substitute:cls, reg r20:V, reg p4:p(V +), reg r22:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg missing1:cls, reg r26:V, reg r27:V, reg c3:L, reg deparse2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg substitute1:cls, reg r30:V, reg p5:p(V +), reg r32:V, reg r33:V, reg xy_coords:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg y3:*, reg y4:V, reg p7:p(V +), reg xlabel:*, reg xlabel1:V, reg p8:p(V +), reg ylabel:*, reg ylabel1:V, reg p9:p(V +), reg r38:V, reg xy:*, reg xy1:V, reg c4:L, reg xy3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r39:V, reg xy4:*, reg xy5:V, reg c5:L, reg xy7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r40:V, reg loess_smooth:cls, reg x3:*, reg x4:V, reg p10:p(V +), reg y5:*, reg y6:V, reg p11:p(V +), reg span1:*, reg span2:V, reg p12:p(V +), reg degree1:*, reg degree2:V, reg p13:p(V +), reg family1:*, reg family2:V, reg p14:p(V +), reg evaluation1:*, reg evaluation2:V, reg p15:p(V +), reg r47:V, reg plot:cls, reg x5:*, reg x6:V, reg p16:p(V +), reg y7:*, reg y8:V, reg p17:p(V +), reg ylim1:*, reg ylim2:V, reg p18:p(V +), reg ____:cls, reg xlab1:*, reg xlab2:V, reg p19:p(V +), reg xy8:*, reg xy9:V, reg c6:L, reg xy11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r52:V, reg p20:p(V +), reg r54:V, reg p21:p(V +), reg ____1:cls, reg ylab1:*, reg ylab2:V, reg p22:p(V +), reg xy12:*, reg xy13:V, reg c7:L, reg xy15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r57:V, reg p23:p(V +), reg r59:V, reg p24:p(V +), reg ddd1:dots?, reg r61:V, reg do_call:cls, reg lines:*, reg lines1:V, reg p25:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg pred4:*, reg pred5:V, reg list1:cls, reg r67:V, reg lpars1:*, reg lpars2:V, reg c8:cls, reg r68:V, reg p26:p(V +), reg r70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg invisible:cls, reg r73:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    span_isMissing = missing.0(span);
    if span_isMissing then L1() else L2(span);
  L1():
    p = prom<V +>{
      return 0.6666666666666666;
    };
    goto L2(p);
  L2(span_orDefault):
    st span = span_orDefault;
    degree_isMissing = missing.0(degree);
    if degree_isMissing then L3(1.0) else L3(degree);
  L3(degree_orDefault):
    st degree = degree_orDefault;
    family_isMissing = missing.0(family);
    if family_isMissing then L4() else L5(family);
  L4():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("symmetric", "gaussian");
      goto L0(r3);
    L2():
      r1 = dyn base("symmetric", "gaussian");
      goto L0(r1);
    };
    goto L5(p1);
  L5(family_orDefault):
    st family = family_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L6(NULL) else L6(xlab);
  L6(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L7(NULL) else L7(ylab);
  L7(ylab_orDefault):
    st ylab = ylab_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L8() else L9(ylim);
  L8():
    p2 = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      pred = ld pred;
      pred1 = force? pred;
      checkMissing(pred1);
      c1 = `is.object`(pred1);
      if c1 then L4() else L5(pred1);
    L2():
      r5 = dyn base1[, , `na.rm`](<sym y>, <lang `$`(pred, y)>, TRUE);
      goto L0(r5);
    L3(dx1):
      range = ldf range in base;
      r8 = dyn range(y2, dx1, TRUE);
      goto L0(r8);
    L4():
      dr = tryDispatchBuiltin.1("$", pred1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(pred3):
      r7 = `$`(pred3, <sym y>);
      goto L3(r7);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    goto L9(p2);
  L9(ylim_orDefault):
    st ylim = ylim_orDefault;
    evaluation_isMissing = missing.0(evaluation);
    if evaluation_isMissing then L10(50.0) else L10(evaluation);
  L10(evaluation_orDefault):
    st evaluation = evaluation_orDefault;
    st `...` = ddd;
    lpars_isMissing = missing.0(lpars);
    if lpars_isMissing then L11() else L12(lpars);
  L11():
    p3 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      list = ldf list in base;
      r12 = dyn list();
      goto L0(r12);
    L2():
      r10 = dyn base2();
      goto L0(r10);
    };
    goto L12(p3);
  L12(lpars_orDefault):
    st lpars = lpars_orDefault;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L13(r15):
    r17 = `!`(r15);
    c2 = `as.logical`(r17);
    if c2 then L22() else L14();
  L20():
    missing = ldf missing in base;
    r16 = dyn missing(<sym x>);
    goto L13(r16);
  L21():
    r14 = dyn base3(<sym x>);
    goto L13(r14);
  L14():
    goto L15(NULL);
  L15(r23):
    st xlabel = r23;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L26() else L27();
  L22():
    deparse1 = ldf deparse1;
    check L23() else D0();
  D0():
    deopt 5 [];
  L16(r25):
    r27 = `!`(r25);
    c3 = `as.logical`(r27);
    if c3 then L28() else L17();
  L23():
    p4 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      substitute = ldf substitute in base;
      r20 = dyn substitute(<sym x>);
      goto L0(r20);
    L2():
      r18 = dyn base4(<sym x>);
      goto L0(r18);
    };
    r22 = dyn deparse1(p4);
    check L24() else D1();
  L26():
    missing1 = ldf missing in base;
    r26 = dyn missing1(<sym y>);
    goto L16(r26);
  L27():
    r24 = dyn base5(<sym y>);
    goto L16(r24);
  D1():
    deopt 7 [r22];
  L17():
    goto L18(NULL);
  L18(r33):
    st ylabel = r33;
    xy_coords = ldf `xy.coords`;
    check L32() else D4();
  L24():
    goto L15(r22);
  L28():
    deparse2 = ldf deparse1;
    check L29() else D2();
  D2():
    deopt 16 [];
  D4():
    deopt 23 [];
  L29():
    p5 = prom<V +>{
      sym6 = ldf substitute;
      base6 = ldf substitute in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      substitute1 = ldf substitute in base;
      r30 = dyn substitute1(<sym y>);
      goto L0(r30);
    L2():
      r28 = dyn base6(<sym y>);
      goto L0(r28);
    };
    r32 = dyn deparse2(p5);
    check L30() else D3();
  L32():
    p6 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p7 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p8 = prom<V +>{
      xlabel = ld xlabel;
      xlabel1 = force? xlabel;
      checkMissing(xlabel1);
      return xlabel1;
    };
    p9 = prom<V +>{
      ylabel = ld ylabel;
      ylabel1 = force? ylabel;
      checkMissing(ylabel1);
      return ylabel1;
    };
    r38 = dyn xy_coords(p6, p7, p8, p9);
    check L33() else D5();
  D3():
    deopt 18 [r32];
  D5():
    deopt 28 [r38];
  L30():
    goto L18(r32);
  L33():
    st xy = r38;
    xy = ld xy;
    check L34() else D6();
  D6():
    deopt 30 [xy];
  L34():
    xy1 = force? xy;
    checkMissing(xy1);
    c4 = `is.object`(xy1);
    if c4 then L36() else L37(xy1);
  L35(dx3):
    st x = dx3;
    xy4 = ld xy;
    check L39() else D7();
  L36():
    dr2 = tryDispatchBuiltin.1("$", xy1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(dr2);
  L37(xy3):
    r39 = `$`(xy3, <sym x>);
    goto L35(r39);
  D7():
    deopt 34 [xy4];
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(dx2);
  L39():
    xy5 = force? xy4;
    checkMissing(xy5);
    c5 = `is.object`(xy5);
    if c5 then L41() else L42(xy5);
  L40(dx5):
    st y = dx5;
    loess_smooth = ldf `loess.smooth`;
    check L44() else D8();
  L41():
    dr4 = tryDispatchBuiltin.1("$", xy5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L43() else L42(dr4);
  L42(xy7):
    r40 = `$`(xy7, <sym y>);
    goto L40(r40);
  D8():
    deopt 39 [];
  L43():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L40(dx4);
  L44():
    p10 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p11 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    p12 = prom<V +>{
      span1 = ld span;
      span2 = force? span1;
      checkMissing(span2);
      return span2;
    };
    p13 = prom<V +>{
      degree1 = ld degree;
      degree2 = force? degree1;
      checkMissing(degree2);
      return degree2;
    };
    p14 = prom<V +>{
      family1 = ld family;
      family2 = force? family1;
      checkMissing(family2);
      return family2;
    };
    p15 = prom<V +>{
      evaluation1 = ld evaluation;
      evaluation2 = force? evaluation1;
      checkMissing(evaluation2);
      return evaluation2;
    };
    r47 = dyn loess_smooth(p10, p11, p12, p13, p14, p15);
    check L45() else D9();
  D9():
    deopt 46 [r47];
  L45():
    st pred = r47;
    plot = ldf plot;
    check L46() else D10();
  D10():
    deopt 49 [];
  L46():
    p16 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p17 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    p18 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p21 = prom<V +>{
      ____ = ldf `%||%`;
      p19 = prom<V +>{
        xlab1 = ld xlab;
        xlab2 = force? xlab1;
        checkMissing(xlab2);
        return xlab2;
      };
      p20 = prom<V +>{
        xy8 = ld xy;
        xy9 = force? xy8;
        checkMissing(xy9);
        c6 = `is.object`(xy9);
        if c6 then L1() else L2(xy9);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", xy9);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(xy11):
        r52 = `$`(xy11, <sym xlab>);
        goto L0(r52);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r54 = dyn ____(p19, p20);
      return r54;
    };
    p24 = prom<V +>{
      ____1 = ldf `%||%`;
      p22 = prom<V +>{
        ylab1 = ld ylab;
        ylab2 = force? ylab1;
        checkMissing(ylab2);
        return ylab2;
      };
      p23 = prom<V +>{
        xy12 = ld xy;
        xy13 = force? xy12;
        checkMissing(xy13);
        c7 = `is.object`(xy13);
        if c7 then L1() else L2(xy13);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", xy13);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(xy15):
        r57 = `$`(xy15, <sym ylab>);
        goto L0(r57);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r59 = dyn ____1(p22, p23);
      return r59;
    };
    ddd1 = ld `...`;
    r61 = dyn plot[, , ylim, xlab, ylab, `...`](p16, p17, p18, p21, p24, ddd1);
    check L47() else D11();
  D11():
    deopt 59 [r61];
  L47():
    do_call = ldf `do.call`;
    check L48() else D12();
  D12():
    deopt 61 [];
  L48():
    p25 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    p26 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r64):
      return r64;
    L2():
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r63 = dyn base7(<lang list(pred)>, <sym lpars>);
      goto L0(r63);
    L1(r66):
      lpars1 = ld lpars;
      lpars2 = force? lpars1;
      checkMissing(lpars2);
      c8 = ldf c in base;
      r68 = dyn c8(r66, lpars2);
      goto L0(r68);
    L4():
      pred4 = ld pred;
      pred5 = force? pred4;
      checkMissing(pred5);
      list1 = ldf list in base;
      r67 = dyn list1(pred5);
      goto L1(r67);
    L5():
      r65 = dyn base8(<sym pred>);
      goto L1(r65);
    };
    r70 = dyn do_call(p25, p26);
    check L49() else D13();
  D13():
    deopt 64 [r70];
  L49():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L50() else L51();
  L19(r72):
    popenv;
    return r72;
  L50():
    invisible = ldf invisible in base;
    r73 = dyn invisible();
    check L52() else D14();
  L51():
    r71 = dyn base9();
    goto L19(r71);
  D14():
    deopt 68 [r73];
  L52():
    goto L19(r73);
  }
}