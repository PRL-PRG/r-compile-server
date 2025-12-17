fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `rep.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg NextMethod:cls, reg r:V, reg structure:cls, reg y:*, reg y1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg class:cls, reg r4:V, reg p1:p(V +), reg levels:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    NextMethod = ldf NextMethod;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn NextMethod();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    st y = r;
    structure = ldf structure;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
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
    p3 = prom<V +>{
      levels = ldf levels;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn levels(p2);
      return r7;
    };
    r9 = dyn structure[, class, levels](p, p1, p3);
    check L3() else D3();
  D3():
    deopt 11 [r9];
  L3():
    popenv;
    return r9;
  }
}