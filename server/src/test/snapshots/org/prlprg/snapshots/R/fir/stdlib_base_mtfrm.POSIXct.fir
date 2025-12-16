fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `mtfrm.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg as_vector:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    as_vector = ldf `as.vector`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_vector(p, "any");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}