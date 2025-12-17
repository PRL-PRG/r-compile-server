fun main() {
  () -+> V { reg r:cls, reg lag:cls, reg ldeaths:*, reg ldeaths1:V, reg p:p(V +), reg r2:V |
    mkenv;
    r = clos inner2044426018;
    st lag = r;
    lag = ldf lag;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      ldeaths = ld ldeaths;
      ldeaths1 = force? ldeaths;
      checkMissing(ldeaths1);
      return ldeaths1;
    };
    r2 = dyn lag(p, 12.0);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("lag");
    goto L0(r2);
  L2():
    r = dyn base("lag");
    goto L0(r);
  }
}