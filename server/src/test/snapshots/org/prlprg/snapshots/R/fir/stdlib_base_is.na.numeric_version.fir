fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `is.na.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg lengths:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg r4:V, reg r5:V |
    mkenv;
    st x = x;
    lengths = ldf lengths;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r2 = dyn unclass(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    r4 = dyn lengths(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    r5 = `==`(r4, 0);
    visible.0();
    popenv;
    return r5;
  }
}