fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner404037382;
    st `is.vector` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner404037382(x, mode) {
  (reg x:*, reg mode:*) -+> V { var x:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg mode1:*, reg mode2:V, reg is_vector:cls, reg r2:V |
    mkenv;
    st x = x;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("any") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang is.vector(x, mode)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    mode1 = ld mode;
    check L5() else D1();
  D1():
    deopt 4 [mode1];
  L5():
    mode2 = force? mode1;
    checkMissing(mode2);
    is_vector = ldf `is.vector` in base;
    r2 = dyn is_vector(x2, mode2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}