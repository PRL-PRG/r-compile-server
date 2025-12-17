fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg r2:V |
    mkenv;
    st x = "world";
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _Internal = ldf `.Internal` in base;
    r2 = dyn _Internal(<lang inspect2(x)>);
    goto L0(r2);
  L2():
    r = dyn base(<lang inspect2(x)>);
    goto L0(r);
  }
}