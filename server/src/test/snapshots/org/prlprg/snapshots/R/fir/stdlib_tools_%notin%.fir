fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st `%notin%` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg match:cls, reg r4:V, reg is_na:cls, reg r5:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang match(x, y)>);
    goto L0(r);
  L1(r3):
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(r3);
    check L9() else D3();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym x>, <sym y>);
    goto L1(r2);
  D0():
    deopt 4 [x1];
  D3():
    deopt 13 [r5];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L7() else D1();
  L9():
    goto L0(r5);
  D1():
    deopt 6 [y1];
  L7():
    y2 = force? y1;
    checkMissing(y2);
    match = ldf match in base;
    r4 = dyn match(x2, y2, NA_INT, NULL);
    check L8() else D2();
  D2():
    deopt 11 [r4];
  L8():
    goto L1(r4);
  }
}