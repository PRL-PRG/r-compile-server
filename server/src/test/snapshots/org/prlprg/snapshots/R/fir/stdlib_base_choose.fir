fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-765854038`;
    st choose = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-765854038`(n, k) {
  (reg n:*, reg k:*) -+> V { var n:*, var k:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg k1:*, reg k2:V, reg choose:cls, reg r2:V |
    mkenv;
    st n = n;
    st k = k;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    n1 = ld n;
    check L3() else D0();
  L2():
    r = dyn base(<lang choose(n, k)>);
    goto L0(r);
  D0():
    deopt 2 [n1];
  L3():
    n2 = force? n1;
    checkMissing(n2);
    k1 = ld k;
    check L4() else D1();
  D1():
    deopt 4 [k1];
  L4():
    k2 = force? k1;
    checkMissing(k2);
    choose = ldf choose in base;
    r2 = dyn choose(n2, k2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}