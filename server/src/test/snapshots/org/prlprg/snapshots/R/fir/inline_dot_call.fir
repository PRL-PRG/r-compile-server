fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vargs:dots, reg r2:V |
    mkenv;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    vargs = dots[];
    r2 = `.Call`("bar", vargs, <missing>);
    goto L0(r2);
  L2():
    r = dyn base("bar");
    goto L0(r);
  }
}