fun main() {
  () -+> V { reg x:*, reg x1:V, reg __:cls, reg r:V |
    mkenv;
    st x = 42.0;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 4 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    __ = ldf `%%` in base;
    r = dyn __(x1, 5.0);
    check L1() else D1();
  D1():
    deopt 8 [r];
  L1():
    popenv;
    return r;
  }
}