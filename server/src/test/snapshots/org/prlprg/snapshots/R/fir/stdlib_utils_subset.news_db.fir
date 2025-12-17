fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4242463948;
    st `subset.news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4242463948(x, subset, `...`) {
  (reg x:*, reg subset:*, reg ddd:dots) -+> V { var x:*, var subset:*, var `...`:dots?, reg do_call:cls, reg news:*, reg news1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg x1:*, reg x2:V, reg list:cls, reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st x = x;
    st subset = subset;
    st `...` = ddd;
    do_call = ldf `do.call`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      news = ld news;
      news1 = force? news;
      checkMissing(news1);
      return news1;
    };
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r2):
      return r2;
    L2():
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r1 = dyn base[, db](<lang substitute(subset)>, <sym x>);
      goto L0(r1);
    L1(r4):
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      list = ldf list in base;
      r6 = dyn list(r4, x2);
      goto L0(r6);
    L4():
      substitute = ldf substitute in base;
      r5 = dyn substitute(<sym subset>);
      goto L1(r5);
    L5():
      r3 = dyn base1(<sym subset>);
      goto L1(r3);
    };
    r8 = dyn do_call(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r8];
  L1():
    popenv;
    return r8;
  }
}