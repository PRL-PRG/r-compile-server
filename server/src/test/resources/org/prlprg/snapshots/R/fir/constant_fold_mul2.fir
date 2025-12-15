fun main() {
  () -+> V { reg x:*, reg x1:V, reg r:V |
    mkenv;
    st x = 4.0;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 4 [6.0, x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    r = `*`(6.0, x1);
    popenv;
    return r;
  }
}