fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2755828749;
    st `.sigLabel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2755828749(sig) {
  (reg sig:*) -+> V { var sig:*, reg paste:cls, reg sig1:*, reg sig2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st sig = sig;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sig1 = ld sig;
      sig2 = force? sig1;
      checkMissing(sig2);
      return sig2;
    };
    r1 = dyn paste[, collapse](p, "#");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}