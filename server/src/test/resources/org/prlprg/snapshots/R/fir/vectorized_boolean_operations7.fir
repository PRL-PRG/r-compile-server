fun main() {
  () -+> V { reg T:*, reg T1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r3:V |
    mkenv;
    T = ld T;
    check L1() else D0();
  D0():
    deopt 0 [T];
  L1():
    T1 = force? T;
    checkMissing(T1);
    st x = T1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st y = r1;
    x = ld x;
    check L5() else D2();
  L2():
    c = ldf c in base;
    r2 = dyn c();
    check L4() else D1();
  L3():
    r = dyn base();
    goto L0(r);
  D1():
    deopt 6 [r2];
  D2():
    deopt 8 [x];
  L4():
    goto L0(r2);
  L5():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L6() else D3();
  D3():
    deopt 9 [x1, y];
  L6():
    y1 = force? y;
    checkMissing(y1);
    r3 = `&&`(x1, y1);
    popenv;
    return r3;
  }
}