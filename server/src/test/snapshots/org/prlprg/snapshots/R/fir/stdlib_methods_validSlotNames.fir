fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1074782916;
    st validSlotNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1074782916(names) {
  (reg names:*) -+> V { var names:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg names1:*, reg names2:V, reg match:cls, reg r4:V, reg is_na:cls, reg r5:V, reg c:L, reg names3:*, reg names4:V, reg stop:cls, reg r6:V |
    mkenv;
    st names = names;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L2();
  L3():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang match("class", names)>);
    goto L0(r);
  L1(r3):
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(r3);
    check L9() else D2();
  L2():
    stop = ldf stop;
    check L13() else D4();
  L5():
    names1 = ld names;
    check L7() else D0();
  L6():
    r2 = dyn base1("class", <sym names>);
    goto L1(r2);
  L10():
    names3 = ld names;
    check L11() else D3();
  D0():
    deopt 5 [names1];
  D2():
    deopt 12 [r5];
  D3():
    deopt 13 [names3];
  D4():
    deopt 16 [];
  L7():
    names2 = force? names1;
    checkMissing(names2);
    match = ldf match in base;
    r4 = dyn match("class", names2, NA_INT, NULL);
    check L8() else D1();
  L9():
    goto L0(r5);
  L11():
    names4 = force? names3;
    checkMissing(names4);
    popenv;
    return names4;
  L13():
    r6 = dyn stop("\"class\" is a reserved slot name and cannot be redefined");
    check L14() else D5();
  D1():
    deopt 10 [r4];
  D5():
    deopt 18 [r6];
  L8():
    goto L1(r4);
  L14():
    popenv;
    return r6;
  }
}