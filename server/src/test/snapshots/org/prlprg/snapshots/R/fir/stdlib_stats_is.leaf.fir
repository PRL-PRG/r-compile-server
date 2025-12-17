fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `is.leaf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg attr:cls, reg r4:V, reg c:L, reg c1:L, reg c3:V, reg L:*, reg L1:V, reg c4:L, reg c5:V |
    mkenv;
    st object = object;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L2(c1);
  L3():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang `<-`(L, attr(object, "leaf"))>);
    goto L0(r);
  L1(r3):
    st L = r3;
    c = `is.logical`(r3);
    goto L0(c);
  L2(c3):
    popenv;
    return c3;
  L5():
    object1 = ld object;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym object>, "leaf");
    goto L1(r2);
  L9():
    L = ld L;
    check L10() else D2();
  D0():
    deopt 3 [object1];
  D2():
    deopt 10 [c1, L];
  L7():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r4 = dyn attr(object2, "leaf");
    check L8() else D1();
  L10():
    L1 = force? L;
    checkMissing(L1);
    c4 = `as.logical`(L1);
    c5 = `&&`(c1, c4);
    goto L2(c5);
  D1():
    deopt 7 [r4];
  L8():
    goto L1(r4);
  }
}