fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `rep.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _Date:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _Date = ldf `.Date`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod();
      return r;
    };
    p1 = prom<V +>{
      sym = ldf oldClass;
      base = ldf oldClass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      oldClass = ldf oldClass in base;
      r4 = dyn oldClass(x2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    };
    r6 = dyn _Date(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r6];
  L1():
    popenv;
    return r6;
  }
}