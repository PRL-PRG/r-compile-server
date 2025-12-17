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
    r2 = dyn c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y");
    check L3() else D0();
  L2():
    r = dyn base("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y");
    goto L0(r);
  D0():
    deopt 6 [r2];
  L3():
    goto L0(r2);
  }
}