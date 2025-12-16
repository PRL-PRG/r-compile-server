fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `is.qr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_list:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x3:*, reg x4:V, reg inherits:cls, reg r5:V, reg c6:L, reg c7:V |
    mkenv;
    st x = x;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1(c);
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    popenv;
    return c2;
  L5():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(x2);
    check L6() else D1();
  L7():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L6():
    goto L0(r2);
  L8():
    x3 = ld x;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym x>, "qr");
    goto L2(c, r3);
  D2():
    deopt 8 [c, x3];
  L10():
    x4 = force? x3;
    checkMissing(x4);
    inherits = ldf inherits in base;
    r5 = dyn inherits(x4, "qr", FALSE);
    check L11() else D3();
  D3():
    deopt 13 [c, r5];
  L11():
    goto L2(c, r5);
  }
}