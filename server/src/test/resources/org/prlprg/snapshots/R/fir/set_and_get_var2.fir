fun main() {
  () -+> V { reg y:*, reg y1:V, reg x:*, reg x1:V |
    mkenv;
    st y = 42.0;
    y = ld y;
    check L0() else D0();
  D0():
    deopt 3 [y];
  L0():
    y1 = force? y;
    checkMissing(y1);
    st x = y1;
    x = ld x;
    check L1() else D1();
  D1():
    deopt 6 [x];
  L1():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}