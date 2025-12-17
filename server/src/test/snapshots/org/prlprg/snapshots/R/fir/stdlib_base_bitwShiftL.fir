fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1831535065;
    st bitwShiftL = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1831535065(a, n) {
  (reg a:*, reg n:*) -+> V { var a:*, var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg n1:*, reg n2:V, reg bitwiseShiftL:cls, reg r2:V |
    mkenv;
    st a = a;
    st n = n;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    a1 = ld a;
    check L3() else D0();
  L2():
    r = dyn base(<lang bitwiseShiftL(a, n)>);
    goto L0(r);
  D0():
    deopt 2 [a1];
  L3():
    a2 = force? a1;
    checkMissing(a2);
    n1 = ld n;
    check L4() else D1();
  D1():
    deopt 4 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    bitwiseShiftL = ldf bitwiseShiftL in base;
    r2 = dyn bitwiseShiftL(a2, n2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}