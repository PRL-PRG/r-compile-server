fun main() {
  () -+> V { reg x:*, reg x1:V, reg y:*, reg y1:V, reg r:V |
    mkenv;
    st x = 1.0;
    st y = 0.5;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 6 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L1() else D1();
  D1():
    deopt 7 [x1, y];
  L1():
    y1 = force? y;
    checkMissing(y1);
    r = `+`(x1, y1);
    popenv;
    return r;
  }
}