fun main() {
  () -+> V { reg x:*, reg x1:V, reg r:V |
    mkenv;
    st x = -42.0;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 3 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    r = `-`(<missing>, x1);
    popenv;
    return r;
  }
}