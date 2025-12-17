fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3913899244;
    st `.isPrototype` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg is:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V |
    mkenv;
    st p = p;
    is = ldf is;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    r1 = dyn is(p3, "classPrototypeDef");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}