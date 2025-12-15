fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg unzip:*, reg unzip1:V, reg identical:cls, reg r2:V |
    mkenv;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    unzip = ld unzip;
    check L3() else D0();
  L2():
    r = dyn base(<sym unzip>, "internal");
    goto L0(r);
  D0():
    deopt 2 [unzip];
  L3():
    unzip1 = force? unzip;
    checkMissing(unzip1);
    identical = ldf identical in base;
    r2 = dyn identical(unzip1, "internal", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L4() else D1();
  D1():
    deopt 13 [r2];
  L4():
    goto L0(r2);
  }
}