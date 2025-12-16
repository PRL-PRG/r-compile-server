fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1757803894;
    st ordered = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1757803894(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg factor:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    st `...` = ddd;
    factor = ldf factor;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r3 = dyn factor[, `...`, ordered](p1, ddd1, TRUE);
    check L3() else D1();
  D1():
    deopt 6 [r3];
  L3():
    popenv;
    return r3;
  }
}