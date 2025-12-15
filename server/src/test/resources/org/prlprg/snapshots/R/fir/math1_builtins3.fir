fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg r2:V |
    mkenv;
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    r2 = exp(0);
    goto L0(r2);
  L2():
    r = dyn base(0);
    goto L0(r);
  }
}