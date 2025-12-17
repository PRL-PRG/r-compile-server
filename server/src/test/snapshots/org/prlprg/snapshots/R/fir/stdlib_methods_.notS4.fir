fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.notS4` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg asS4:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st object = object;
    asS4 = ldf asS4;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn asS4(p, FALSE, 0);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}