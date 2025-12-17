fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner207663193;
    st `[.listof` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner207663193(x, i, `...`) {
  (reg x:*, reg i:*, reg ddd:dots) -+> V { var x:*, var i:*, var `...`:dots?, reg structure:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg class:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st i = i;
    st `...` = ddd;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod("[");
      return r;
    };
    p1 = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      class = ldf class in base;
      r4 = dyn class(x2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    };
    r6 = dyn structure[, class](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}