fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st isRestart = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>, "restart");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "restart", FALSE);
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    goto L0(r2);
  }
}