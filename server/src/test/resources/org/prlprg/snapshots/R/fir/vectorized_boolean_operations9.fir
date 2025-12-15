fun main() {
  () -+> V { reg x:*, reg x1:V, reg r:V, reg r1:V |
    mkenv;
    st x = 42.0;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 3 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    r = `!`(x1);
    r1 = `!`(r);
    popenv;
    return r1;
  }
}