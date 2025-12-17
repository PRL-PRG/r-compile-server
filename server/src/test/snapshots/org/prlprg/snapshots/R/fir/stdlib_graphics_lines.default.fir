fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner406146650;
    st `lines.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner406146650(x, y, type, `...`) {
  (reg x:*, reg y:*, reg type:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var `...`:dots?, reg plot_xy:cls, reg xy_coords:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg type1:*, reg type2:V, reg p3:p(V +), reg ddd1:dots?, reg r5:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1("l") else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    st `...` = ddd;
    plot_xy = ldf `plot.xy`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      xy_coords = ldf `xy.coords`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        y1 = ld y;
        y2 = force? y1;
        checkMissing(y2);
        return y2;
      };
      r2 = dyn xy_coords(p, p1);
      return r2;
    };
    p3 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    ddd1 = ld `...`;
    r5 = dyn plot_xy[, type, `...`](p2, p3, ddd1);
    check L3() else D1();
  D1():
    deopt 6 [r5];
  L3():
    popenv;
    return r5;
  }
}