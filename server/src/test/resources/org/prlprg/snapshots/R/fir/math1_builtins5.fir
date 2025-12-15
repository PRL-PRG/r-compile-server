fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg r5:V |
    mkenv;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang c(4.0, 9.0)>);
    goto L0(r);
  L1(r3):
    r5 = sqrt(r3);
    goto L0(r5);
  L4():
    c = ldf c in base;
    r4 = dyn c(4.0, 9.0);
    check L6() else D0();
  L5():
    r2 = dyn base1(4.0, 9.0);
    goto L1(r2);
  D0():
    deopt 6 [r4];
  L6():
    goto L1(r4);
  }
}