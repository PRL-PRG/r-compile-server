fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st lfactorial = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:V, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf lgamma;
    base = ldf lgamma in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `+`(x, 1.0)>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `+`(x2, 1.0);
    r3 = lgamma(r2);
    goto L0(r3);
  }
}