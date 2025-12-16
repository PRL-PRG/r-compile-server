fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V |
    mkenv;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    rep = ldf rep in base;
    r2 = dyn rep(1.0, 10.0);
    goto L0(r2);
  L2():
    r = dyn base(1.0, 10.0);
    goto L0(r);
  }
}