fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `.SSname` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg x1:*, reg x2:V, reg p:p(V +), reg dev_cur:cls, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    paste = ldf paste;
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
    p1 = prom<V +>{
      dev_cur = ldf `dev.cur`;
      r1 = dyn dev_cur();
      return r1;
    };
    r3 = dyn paste[, , sep](p, p1, ":");
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    popenv;
    return r3;
  }
}