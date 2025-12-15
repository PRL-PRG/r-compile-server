fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    c = ldf c in base;
    r2 = dyn c(1.0, 1.0, 1.0);
    check L3() else D0();
  L2():
    r = dyn base[i, d, s](1.0, 1.0, 1.0);
    goto L0(r);
  D0():
    deopt 9 [r2];
  L3():
    goto L0(r2);
  }
}