fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1802581710;
    st bitwOr = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1802581710(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg b1:*, reg b2:V, reg bitwiseOr:cls, reg r2:V |
    mkenv;
    st a = a;
    st b = b;
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
    r = dyn base(<lang bitwiseOr(a, b)>);
    goto L0(r);
  D0():
    deopt 2 [a1];
  L3():
    a2 = force? a1;
    checkMissing(a2);
    b1 = ld b;
    check L4() else D1();
  D1():
    deopt 4 [b1];
  L4():
    b2 = force? b1;
    checkMissing(b2);
    bitwiseOr = ldf bitwiseOr in base;
    r2 = dyn bitwiseOr(a2, b2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}