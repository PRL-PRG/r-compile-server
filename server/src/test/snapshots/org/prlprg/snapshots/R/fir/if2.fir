fun main() {
  () -+> V { reg x:*, reg x1:V, reg r:V, reg c:L |
    mkenv;
    st x = 10.0;
    x = ld x;
    check L1() else D0();
  D0():
    deopt 3 [x];
  L1():
    x1 = force? x;
    checkMissing(x1);
    r = `>`(x1, 0.0);
    c = `as.logical`(r);
    if c then L2() else L0();
  L0():
    setInvisible.0();
    popenv;
    return NULL;
  L2():
    popenv;
    return 3.0;
  }
}