fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2238593217;
    st `plot.ecdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2238593217(x, `...`, ylab, verticals, `col.01line`, pch) {
  (reg x:*, reg ddd:dots, reg ylab:*, reg verticals:*, reg col_01line:*, reg pch:*) -+> V { var x:*, var `...`:dots?, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var verticals:*, reg verticals_isMissing:L, reg verticals_orDefault:*, var `col.01line`:*, reg col_01line_isMissing:L, reg col_01line_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg plot_stepfun:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg ylab1:*, reg ylab2:V, reg p1:p(V +), reg verticals1:*, reg verticals2:V, reg p2:p(V +), reg pch1:*, reg pch2:V, reg p3:p(V +), reg r4:V, reg abline:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p4:p(V +), reg col_01line1:*, reg col_01line2:V, reg p5:p(V +), reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L0("Fn(x)") else L0(ylab);
  L0(ylab_orDefault):
    st ylab = ylab_orDefault;
    verticals_isMissing = missing.0(verticals);
    if verticals_isMissing then L1(FALSE) else L1(verticals);
  L1(verticals_orDefault):
    st verticals = verticals_orDefault;
    col_01line_isMissing = missing.0(col_01line);
    if col_01line_isMissing then L2("gray70") else L2(col_01line);
  L2(col_01line_orDefault):
    st `col.01line` = col_01line_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L3(19.0) else L3(pch);
  L3(pch_orDefault):
    st pch = pch_orDefault;
    plot_stepfun = ldf `plot.stepfun`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    p1 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p2 = prom<V +>{
      verticals1 = ld verticals;
      verticals2 = force? verticals1;
      checkMissing(verticals2);
      return verticals2;
    };
    p3 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    r4 = dyn plot_stepfun[, `...`, ylab, verticals, pch](p, ddd1, p1, p2, p3);
    check L5() else D1();
  D1():
    deopt 10 [r4];
  L5():
    abline = ldf abline;
    check L6() else D2();
  D2():
    deopt 12 [];
  L6():
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(0.0, 1.0);
      goto L0(r7);
    L2():
      r5 = dyn base(0.0, 1.0);
      goto L0(r5);
    };
    p5 = prom<V +>{
      col_01line1 = ld `col.01line`;
      col_01line2 = force? col_01line1;
      checkMissing(col_01line2);
      return col_01line2;
    };
    r10 = dyn abline[h, col, lty](p4, p5, 2.0);
    check L7() else D3();
  D3():
    deopt 19 [r10];
  L7():
    popenv;
    return r10;
  }
}