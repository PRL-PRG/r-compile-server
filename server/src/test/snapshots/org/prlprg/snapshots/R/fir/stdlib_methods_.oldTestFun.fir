fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.oldTestFun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg _in_:cls, reg CLASS:*, reg CLASS1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg object1:*, reg object2:V, reg attr:cls, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st object = object;
    _in_ = ldf `%in%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      CLASS = ld CLASS;
      CLASS1 = force? CLASS;
      checkMissing(CLASS1);
      return CLASS1;
    };
    p1 = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      attr = ldf attr in base;
      r3 = dyn attr(object2, "class");
      goto L0(r3);
    L2():
      r1 = dyn base(<sym object>, "class");
      goto L0(r1);
    };
    r5 = dyn _in_(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}