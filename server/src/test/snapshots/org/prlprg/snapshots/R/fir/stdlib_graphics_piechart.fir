fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner598434145;
    st piechart = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner598434145(x, labels, edges, radius, density, angle, col, main, `...`) {
  (reg x:*, reg labels:*, reg edges:*, reg radius:*, reg density:*, reg angle:*, reg col:*, reg main:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg p:p(V +), var edges:*, reg edges_isMissing:L, reg edges_orDefault:*, var radius:*, reg radius_isMissing:L, reg radius_orDefault:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var `...`:dots?, reg _Defunct:cls, reg r4:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0() else L1(labels);
  L0():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r2 = dyn names(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(labels_orDefault):
    st labels = labels_orDefault;
    edges_isMissing = missing.0(edges);
    if edges_isMissing then L2(200.0) else L2(edges);
  L2(edges_orDefault):
    st edges = edges_orDefault;
    radius_isMissing = missing.0(radius);
    if radius_isMissing then L3(0.8) else L3(radius);
  L3(radius_orDefault):
    st radius = radius_orDefault;
    density_isMissing = missing.0(density);
    if density_isMissing then L4(NULL) else L4(density);
  L4(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L5(45.0) else L5(angle);
  L5(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L6(NULL) else L6(col);
  L6(col_orDefault):
    st col = col_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L7(NULL) else L7(main);
  L7(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    _Defunct = ldf `.Defunct`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r4 = dyn _Defunct("pie");
    check L9() else D1();
  D1():
    deopt 3 [r4];
  L9():
    popenv;
    return r4;
  }
}