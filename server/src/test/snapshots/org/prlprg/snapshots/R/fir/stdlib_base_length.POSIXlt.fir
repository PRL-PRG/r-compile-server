fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `length.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lengths:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg unclass:cls, reg r4:V, reg p:p(V +), reg r6:V, reg max:cls, reg r7:V |
    mkenv;
    st x = x;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    lengths = ldf lengths;
    check L3() else D0();
  L2():
    r = dyn base(<lang lengths(unclass(x))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r4 = dyn unclass(x2);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym x>);
      goto L0(r2);
    };
    r6 = dyn lengths(p);
    check L4() else D1();
  D1():
    deopt 5 [r6];
  L4():
    max = ldf max in base;
    r7 = dyn max(r6);
    check L5() else D2();
  D2():
    deopt 7 [r7];
  L5():
    goto L0(r7);
  }
}