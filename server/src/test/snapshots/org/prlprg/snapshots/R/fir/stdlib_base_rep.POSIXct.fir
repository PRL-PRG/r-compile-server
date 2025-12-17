fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `rep.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _POSIXct:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _POSIXct = ldf `.POSIXct`;
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
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r4 = dyn attr(x2, "tzone");
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>, "tzone");
      goto L0(r2);
    };
    p2 = prom<V +>{
      sym1 = ldf oldClass;
      base1 = ldf oldClass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      oldClass = ldf oldClass in base;
      r8 = dyn oldClass(x4);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym x>);
      goto L0(r6);
    };
    r10 = dyn _POSIXct(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r10];
  L1():
    popenv;
    return r10;
  }
}