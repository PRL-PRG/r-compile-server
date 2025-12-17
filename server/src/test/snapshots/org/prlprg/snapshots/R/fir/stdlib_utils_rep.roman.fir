fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `rep.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg class:cls, reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(<lang unclass(x)>, <sym ...>);
      goto L0(r2);
    L2():
      r = dyn base(<lang unclass(x)>, <sym ...>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      class = ldf class in base;
      r6 = dyn class(x2);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    r8 = dyn structure[, class](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r8];
  L1():
    popenv;
    return r8;
  }
}