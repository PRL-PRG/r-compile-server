fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2782963986;
    st matlines = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2782963986(x, y, type, lty, lwd, pch, col, `...`) {
  (reg x:*, reg y:*, reg type:*, reg lty:*, reg lwd:*, reg pch:*, reg col:*, reg ddd:dots) -+> V { var x:*, var y:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg p:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg p1:p(V +), var `...`:dots?, reg matplot:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg y1:*, reg y2:V, reg p3:p(V +), reg type1:*, reg type2:V, reg p4:p(V +), reg lty1:*, reg lty2:V, reg p5:p(V +), reg lwd1:*, reg lwd2:V, reg p6:p(V +), reg pch1:*, reg pch2:V, reg p7:p(V +), reg col1:*, reg col2:V, reg p8:p(V +), reg ddd1:dots?, reg r9:V |
    mkenv;
    st x = x;
    st y = y;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("l") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L1() else L2(lty);
  L1():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    goto L2(p);
  L2(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L3(1.0) else L3(lwd);
  L3(lwd_orDefault):
    st lwd = lwd_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L4(NULL) else L4(pch);
  L4(pch_orDefault):
    st pch = pch_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L5() else L6(col);
  L5():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    goto L6(p1);
  L6(col_orDefault):
    st col = col_orDefault;
    st `...` = ddd;
    matplot = ldf matplot;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p4 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p5 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p6 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    p7 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p8 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    ddd1 = ld `...`;
    r9 = dyn matplot[x, y, type, lty, lwd, pch, col, add, `...`](p2, p3, p4, p5, p6, p7, p8, TRUE, ddd1);
    check L8() else D1();
  D1():
    deopt 19 [r9];
  L8():
    popenv;
    return r9;
  }
}