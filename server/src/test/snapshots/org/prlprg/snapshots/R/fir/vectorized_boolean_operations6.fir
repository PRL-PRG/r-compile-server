fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r3:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st x = r1;
    st y = TRUE;
    x = ld x;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r2 = dyn c();
    check L3() else D0();
  L2():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 8 [x];
  L3():
    goto L0(r2);
  L4():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L5() else D2();
  D2():
    deopt 9 [x1, y];
  L5():
    y1 = force? y;
    checkMissing(y1);
    r3 = `&&`(x1, y1);
    popenv;
    return r3;
  }
}