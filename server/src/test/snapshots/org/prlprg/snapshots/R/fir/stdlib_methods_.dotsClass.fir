fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.dotsClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg __1:*, reg __2:V, reg class:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L5() else L1();
  L3():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ..1>);
    goto L0(r2);
  L4():
    r = dyn base(<sym ..1>);
    goto L0(r);
  L1():
    sym1 = ldf class;
    base1 = ldf class in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L5():
    popenv;
    return "missing";
  L2(r4):
    popenv;
    return r4;
  L7():
    __1 = ld `..1`;
    check L9() else D0();
  L8():
    r3 = dyn base1(<sym ..1>);
    goto L2(r3);
  D0():
    deopt 7 [__1];
  L9():
    __2 = force? __1;
    checkMissing(__2);
    class = ldf class in base;
    r5 = dyn class(__2);
    check L10() else D1();
  D1():
    deopt 10 [r5];
  L10():
    goto L2(r5);
  }
}