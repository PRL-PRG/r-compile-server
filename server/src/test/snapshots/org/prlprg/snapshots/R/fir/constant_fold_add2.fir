fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:L, reg r4:V, reg c:cls, reg r5:V, reg r6:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r3, r4):
    r6 = `+`(r3, r4);
    popenv;
    return r6;
  L1():
    c = ldf c in base;
    r5 = dyn c(10.0, 11.0);
    check L3() else D0();
  L2():
    r2 = dyn base(10.0, 11.0);
    goto L0(TRUE, r2);
  D0():
    deopt 6 [TRUE, r5];
  L3():
    goto L0(TRUE, r5);
  }
}