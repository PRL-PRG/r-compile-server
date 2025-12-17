fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1438116971;
    st `plot.princomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1438116971(x, main, `...`) {
  (reg x:*, reg main:*, reg ddd:dots) -+> V { var x:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var `...`:dots?, reg screeplot_default:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg main1:*, reg main2:V, reg p3:p(V +), reg ddd1:dots?, reg r8:V |
    mkenv;
    st x = x;
    main_isMissing = missing.0(main);
    if main_isMissing then L0() else L1(main);
  L0():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym x>);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L1(p1);
  L1(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    screeplot_default = ldf `screeplot.default`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    ddd1 = ld `...`;
    r8 = dyn screeplot_default[, main, `...`](p2, p3, ddd1);
    check L3() else D1();
  D1():
    deopt 6 [r8];
  L3():
    popenv;
    return r8;
  }
}