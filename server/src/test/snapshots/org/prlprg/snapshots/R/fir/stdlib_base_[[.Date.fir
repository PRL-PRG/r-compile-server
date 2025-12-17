fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3583251586;
    st `[[.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3583251586(x, `...`, drop) {
  (reg x:*, reg ddd:dots, reg drop:*) -+> V { var x:*, var `...`:dots?, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg _Date:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    _Date = ldf `.Date`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod("[[");
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
    check L2() else D1();
  D1():
    deopt 4 [r6];
  L2():
    popenv;
    return r6;
  }
}