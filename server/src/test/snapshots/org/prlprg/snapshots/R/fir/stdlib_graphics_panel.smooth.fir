fun main() {
  () -+> V { reg r:cls, reg pairs:cls, reg swiss:*, reg swiss1:V, reg p:p(V +), reg panel_smooth:*, reg panel_smooth1:V, reg p1:p(V +), reg r3:V, reg pairs1:cls, reg swiss2:*, reg swiss3:V, reg p2:p(V +), reg panel_smooth2:*, reg panel_smooth3:V, reg p3:p(V +), reg r6:V |
    mkenv;
    r = clos inner588395913;
    st `panel.smooth` = r;
    pairs = ldf pairs;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      swiss = ld swiss;
      swiss1 = force? swiss;
      checkMissing(swiss1);
      return swiss1;
    };
    p1 = prom<V +>{
      panel_smooth = ld `panel.smooth`;
      panel_smooth1 = force? panel_smooth;
      checkMissing(panel_smooth1);
      return panel_smooth1;
    };
    r3 = dyn pairs[, panel, pch](p, p1, ".");
    check L1() else D1();
  D1():
    deopt 10 [r3];
  L1():
    pairs1 = ldf pairs;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p2 = prom<V +>{
      swiss2 = ld swiss;
      swiss3 = force? swiss2;
      checkMissing(swiss3);
      return swiss3;
    };
    p3 = prom<V +>{
      panel_smooth2 = ld `panel.smooth`;
      panel_smooth3 = force? panel_smooth2;
      checkMissing(panel_smooth3);
      return panel_smooth3;
    };
    r6 = dyn pairs1[, panel, lwd, cex, col](p2, p3, 2.0, 1.5, 4.0);
    check L3() else D3();
  D3():
    deopt 22 [r6];
  L3():
    popenv;
    return r6;
  }
}
fun inner588395913(x, y, col, bg, pch, cex, `col.smooth`, span, iter, `...`) {
  (reg x:*, reg y:*, reg col:*, reg bg:*, reg pch:*, reg cex:*, reg col_smooth:*, reg span:*, reg iter:*, reg ddd:dots) -+> V { var x:*, var y:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var bg:*, reg bg_isMissing:L, reg bg_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg par1:cls, reg r2:V, reg p1:p(V +), var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var `col.smooth`:*, reg col_smooth_isMissing:L, reg col_smooth_orDefault:*, var span:*, reg span_isMissing:L, reg span_orDefault:*, reg p2:p(V +), var iter:*, reg iter_isMissing:L, reg iter_orDefault:*, var `...`:dots?, reg points:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg y1:*, reg y2:V, reg p4:p(V +), reg pch1:*, reg pch2:V, reg p5:p(V +), reg col1:*, reg col2:V, reg p6:p(V +), reg bg1:*, reg bg2:V, reg p7:p(V +), reg cex1:*, reg cex2:V, reg p8:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg is_finite:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg r19:V, reg y3:*, reg y4:V, reg is_finite1:cls, reg r20:V, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg ok:*, reg ok1:V, reg any:cls, reg r24:V, reg c:L, reg lines:cls, reg __:cls, reg r25:V, reg r26:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ok2:*, reg ok3:V, reg __1:cls, reg r27:V, reg p9:p(V +), reg y5:*, reg y6:V, reg c2:L, reg y8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ok4:*, reg ok5:V, reg __2:cls, reg r29:V, reg p10:p(V +), reg span1:*, reg span2:V, reg p11:p(V +), reg iter1:*, reg iter2:V, reg p12:p(V +), reg r33:V, reg p13:p(V +), reg col_smooth1:*, reg col_smooth2:V, reg p14:p(V +), reg ddd1:dots?, reg r36:V |
    mkenv;
    st x = x;
    st y = y;
    col_isMissing = missing.0(col);
    if col_isMissing then L0() else L1(col);
  L0():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("col");
      return r;
    };
    goto L1(p);
  L1(col_orDefault):
    st col = col_orDefault;
    bg_isMissing = missing.0(bg);
    if bg_isMissing then L2(NA_LGL) else L2(bg);
  L2(bg_orDefault):
    st bg = bg_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L3() else L4(pch);
  L3():
    p1 = prom<V +>{
      par1 = ldf par;
      r2 = dyn par1("pch");
      return r2;
    };
    goto L4(p1);
  L4(pch_orDefault):
    st pch = pch_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L5(1.0) else L5(cex);
  L5(cex_orDefault):
    st cex = cex_orDefault;
    col_smooth_isMissing = missing.0(col_smooth);
    if col_smooth_isMissing then L6(2.0) else L6(col_smooth);
  L6(col_smooth_orDefault):
    st `col.smooth` = col_smooth_orDefault;
    span_isMissing = missing.0(span);
    if span_isMissing then L7() else L8(span);
  L7():
    p2 = prom<V +>{
      return 0.6666666666666666;
    };
    goto L8(p2);
  L8(span_orDefault):
    st span = span_orDefault;
    iter_isMissing = missing.0(iter);
    if iter_isMissing then L9(3.0) else L9(iter);
  L9(iter_orDefault):
    st iter = iter_orDefault;
    st `...` = ddd;
    points = ldf points;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p4 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p5 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p6 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p7 = prom<V +>{
      bg1 = ld bg;
      bg2 = force? bg1;
      checkMissing(bg2);
      return bg2;
    };
    p8 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    r11 = dyn points[, , pch, col, bg, cex](p3, p4, p5, p6, p7, p8);
    check L15() else D1();
  D1():
    deopt 12 [r11];
  L15():
    sym = ldf `is.finite`;
    base = ldf `is.finite` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L10(r13):
    sym1 = ldf `is.finite`;
    base1 = ldf `is.finite` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L16():
    x3 = ld x;
    check L18() else D2();
  L17():
    r12 = dyn base(<sym x>);
    goto L10(r12);
  D2():
    deopt 15 [x3];
  L11(r18, r19):
    r21 = `&&`(r18, r19);
    st ok = r21;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L18():
    x4 = force? x3;
    checkMissing(x4);
    is_finite = ldf `is.finite` in base;
    r14 = dyn is_finite(x4);
    check L19() else D3();
  L20():
    y3 = ld y;
    check L22() else D4();
  L21():
    r17 = dyn base1(<sym y>);
    goto L11(r13, r17);
  D3():
    deopt 18 [r14];
  D4():
    deopt 20 [r13, y3];
  L12(r23):
    c = `as.logical`(r23);
    if c then L28() else L13();
  L19():
    goto L10(r14);
  L22():
    y4 = force? y3;
    checkMissing(y4);
    is_finite1 = ldf `is.finite` in base;
    r20 = dyn is_finite1(y4);
    check L23() else D5();
  L24():
    ok = ld ok;
    check L26() else D6();
  L25():
    r22 = dyn base2(<sym ok>);
    goto L12(r22);
  D5():
    deopt 23 [r13, r20];
  D6():
    deopt 28 [ok];
  L13():
    invisible.0();
    popenv;
    return NULL;
  L23():
    goto L11(r13, r20);
  L26():
    ok1 = force? ok;
    checkMissing(ok1);
    any = ldf any in base;
    r24 = dyn any(ok1);
    check L27() else D7();
  L28():
    lines = ldf lines;
    check L29() else D8();
  D7():
    deopt 31 [r24];
  D8():
    deopt 33 [];
  L27():
    goto L12(r24);
  L29():
    p13 = prom<V +>{
      __ = ldf `::`;
      r25 = dyn __("stats", "lowess");
      checkFun.0(r25);
      r26 = r25 as cls;
      p9 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c1 = `is.object`(x6);
        if c1 then L1() else L2(x6);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", x6);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x8):
        ok2 = ld ok;
        ok3 = force? ok2;
        __1 = ldf `[` in base;
        r27 = dyn __1(x8, ok3);
        goto L0(r27);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p10 = prom<V +>{
        y5 = ld y;
        y6 = force? y5;
        checkMissing(y6);
        c2 = `is.object`(y6);
        if c2 then L1() else L2(y6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", y6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(y8):
        ok4 = ld ok;
        ok5 = force? ok4;
        __2 = ldf `[` in base;
        r29 = dyn __2(y8, ok5);
        goto L0(r29);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p11 = prom<V +>{
        span1 = ld span;
        span2 = force? span1;
        checkMissing(span2);
        return span2;
      };
      p12 = prom<V +>{
        iter1 = ld iter;
        iter2 = force? iter1;
        checkMissing(iter2);
        return iter2;
      };
      r33 = dyn r26[, , f, iter](p9, p10, p11, p12);
      return r33;
    };
    p14 = prom<V +>{
      col_smooth1 = ld `col.smooth`;
      col_smooth2 = force? col_smooth1;
      checkMissing(col_smooth2);
      return col_smooth2;
    };
    ddd1 = ld `...`;
    r36 = dyn lines[, col, `...`](p13, p14, ddd1);
    check L30() else D9();
  D9():
    deopt 38 [r36];
  L30():
    popenv;
    return r36;
  }
}