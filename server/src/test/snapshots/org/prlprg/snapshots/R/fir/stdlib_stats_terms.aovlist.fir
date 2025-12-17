fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `terms.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg terms:cls, reg x3:*, reg x4:V, reg p:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st x = r1;
    terms = ldf terms;
    check L5() else D2();
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>, "terms");
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 9 [];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "terms");
    check L4() else D1();
  L5():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    ddd1 = ld `...`;
    r4 = dyn terms[, `...`](p, ddd1);
    check L6() else D3();
  D1():
    deopt 6 [r2];
  D3():
    deopt 12 [r4];
  L4():
    goto L0(r2);
  L6():
    popenv;
    return r4;
  }
}