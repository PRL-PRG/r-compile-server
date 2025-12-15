fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg r3:cls, reg g:cls, reg r4:V, reg x:*, reg x1:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st x = r1;
    r3 = clos inner560854305;
    st g = r3;
    g = ldf g;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0);
    check L3() else D0();
  L2():
    r = dyn base(1.0, 2.0);
    goto L0(r);
  D0():
    deopt 5 [r2];
  D1():
    deopt 11 [];
  L3():
    goto L0(r2);
  L4():
    r4 = dyn g();
    check L5() else D2();
  D2():
    deopt 12 [r4];
  L5():
    x = ld x;
    check L6() else D3();
  D3():
    deopt 13 [x];
  L6():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}
fun inner560854305() {
  () -+> V { |
    mkenv;
    sst x = 42.0;
    invisible.0();
    popenv;
    return 42.0;
  }
}