fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.listify` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x5:*, reg x6:V, reg list:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>, "list");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "list", FALSE);
    check L6() else D1();
  L7():
    x3 = ld x;
    check L8() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  L2(r4):
    popenv;
    return r4;
  L6():
    goto L0(r2);
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L10():
    x5 = ld x;
    check L12() else D3();
  L11():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  D3():
    deopt 12 [x5];
  L12():
    x6 = force? x5;
    checkMissing(x6);
    list = ldf list in base;
    r5 = dyn list(x6);
    check L13() else D4();
  D4():
    deopt 15 [r5];
  L13():
    goto L2(r5);
  }
}