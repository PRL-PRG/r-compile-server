fun main() {
  () -+> V { reg r:cls, reg cat:cls, reg toHTML:cls, reg demo:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner2044426018;
    st toHTML = r;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      toHTML = ldf toHTML;
      p = prom<V +>{
        demo = ldf demo;
        r1 = dyn demo[package]("base");
        return r1;
      };
      r3 = dyn toHTML(p);
      return r3;
    };
    r5 = dyn cat[, sep](p1, "\n");
    check L1() else D1();
  D1():
    deopt 8 [r5];
  L1():
    popenv;
    return r5;
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
    r2 = dyn UseMethod("toHTML");
    goto L0(r2);
  L2():
    r = dyn base("toHTML");
    goto L0(r);
  }
}