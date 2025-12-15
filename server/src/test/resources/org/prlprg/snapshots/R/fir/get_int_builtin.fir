fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vector:cls, reg r2:V |
    mkenv;
    sym = ldf vector;
    base = ldf vector in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    vector = ldf vector in base;
    r2 = dyn vector("logical", 2.0);
    check L3() else D0();
  L2():
    r = dyn base[length](2.0);
    goto L0(r);
  D0():
    deopt 5 [r2];
  L3():
    goto L0(r2);
  }
}