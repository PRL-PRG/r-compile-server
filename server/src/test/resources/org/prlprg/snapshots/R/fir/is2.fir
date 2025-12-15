fun main() {
  () -+> V { reg a:*, reg a1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x:*, reg x1:V, reg c:L |
    mkenv;
    st a = 10.0;
    a = ld a;
    check L1() else D0();
  D0():
    deopt 4 [1.0, a];
  L1():
    a1 = force? a;
    checkMissing(a1);
    r = `:`(1.0, a1);
    st x = r;
    sym = ldf `is.integer`;
    base = ldf `is.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    popenv;
    return r2;
  L2():
    x = ld x;
    check L4() else D1();
  L3():
    r1 = dyn base(<sym x>);
    goto L0(r1);
  D1():
    deopt 9 [x];
  L4():
    x1 = force? x;
    checkMissing(x1);
    c = `is.integer`(x1);
    goto L0(c);
  }
}