fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400479044;
    st `.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400479044(x) {
  (reg x:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg l:*, reg class__:cls, reg r4:V, reg x1:*, reg x2:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    l = ld x;
    class__ = ldf `class<-`;
    check L2() else D0();
  D0():
    deopt 3 ["person", l, "person"];
  L2():
    r4 = dyn class__(l, NULL, "person");
    check L3() else D1();
  D1():
    deopt 5 ["person", r4];
  L3():
    st x = r4;
    x1 = ld x;
    check L4() else D2();
  D2():
    deopt 7 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}