fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.relistable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg class:cls, reg r8:V, reg c1:cls, reg r9:V, reg l:*, reg class__:cls, reg r10:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>, "relistable");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L4();
  L4():
    x5 = ld x;
    check L20() else D7();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "relistable", FALSE);
    check L8() else D1();
  L9():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 7 [r2];
  D7():
    deopt 27 [x5];
  L2(r5):
    l = ld x;
    class__ = ldf `class<-`;
    check L17() else D5();
  L8():
    goto L0(r2);
  L10():
    sym2 = ldf class;
    base2 = ldf class in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L11():
    r4 = dyn base1("relistable", <lang class(x)>);
    goto L2(r4);
  L20():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D5():
    deopt 21 [r5, l, r5];
  L3(r7):
    c1 = ldf c in base;
    r9 = dyn c1("relistable", r7);
    check L16() else D4();
  L12():
    x3 = ld x;
    check L14() else D2();
  L13():
    r6 = dyn base2(<sym x>);
    goto L3(r6);
  L17():
    r10 = dyn class__(l, NULL, r5);
    check L18() else D6();
  D2():
    deopt 14 [x3];
  D4():
    deopt 19 [r9];
  D6():
    deopt 23 [r5, r10];
  L14():
    x4 = force? x3;
    checkMissing(x4);
    class = ldf class in base;
    r8 = dyn class(x4);
    check L15() else D3();
  L16():
    goto L2(r9);
  L18():
    st x = r10;
    goto L4();
  D3():
    deopt 17 [r8];
  L15():
    goto L3(r8);
  }
}