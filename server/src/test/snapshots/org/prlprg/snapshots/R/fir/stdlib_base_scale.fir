fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg matrix:cls, reg p1:p(V +), reg r6:V, reg scale:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r8:V, reg cov:cls, reg scale1:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V |
    mkenv;
    r = clos inner305472191;
    st scale = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    matrix = ldf matrix;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r6 = dyn matrix[, ncol](p1, 2.0);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r6];
  L4():
    goto L0();
  L6():
    st x = r6;
    scale = ldf scale;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r8 = dyn scale[, scale](p2, FALSE);
    check L8() else D5();
  D5():
    deopt 20 [r8];
  L8():
    st `centered.x` = r8;
    cov = ldf cov;
    check L9() else D6();
  D6():
    deopt 23 [];
  L9():
    p4 = prom<V +>{
      scale1 = ldf scale;
      p3 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r10 = dyn scale1(p3);
      st `centered.scaled.x` = r10;
      invisible.0();
      return r10;
    };
    r12 = dyn cov(p4);
    check L10() else D7();
  D7():
    deopt 25 [r12];
  L10():
    popenv;
    return r12;
  }
}
fun inner305472191(x, center, scale) {
  (reg x:*, reg center:*, reg scale:*) -+> V { var x:*, var center:*, reg center_isMissing:L, reg center_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    center_isMissing = missing.0(center);
    if center_isMissing then L0(TRUE) else L0(center);
  L0(center_orDefault):
    st center = center_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(TRUE) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("scale");
    goto L2(r2);
  L4():
    r = dyn base("scale");
    goto L2(r);
  }
}