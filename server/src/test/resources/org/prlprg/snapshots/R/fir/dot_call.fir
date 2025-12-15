fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___:cls, reg r2:V, reg vargs:dots, reg r3:V |
    mkenv;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    ___ = ldf `:::`;
    check L3() else D0();
  L2():
    r = dyn base(<lang `:::`(tools, C_nonASCII)>, "\u0158");
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    r2 = dyn ___("tools", "C_nonASCII");
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    vargs = dots["\u0158"];
    r3 = `.Call`(r2, vargs, <missing>);
    goto L0(r3);
  }
}