fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2027872482`;
    st bitwNot = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2027872482`(a) {
  (reg a:*) -+> V { var a:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg bitwiseNot:cls, reg r2:V |
    mkenv;
    st a = a;
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
    r = dyn base(<lang bitwiseNot(a)>);
    goto L0(r);
  D0():
    deopt 2 [a1];
  L3():
    a2 = force? a1;
    checkMissing(a2);
    bitwiseNot = ldf bitwiseNot in base;
    r2 = dyn bitwiseNot(a2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}