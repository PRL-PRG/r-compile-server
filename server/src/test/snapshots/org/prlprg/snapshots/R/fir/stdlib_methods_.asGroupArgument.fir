fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2933193147;
    st `.asGroupArgument` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2933193147(group) {
  (reg group:*) -+> V { var group:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg group1:*, reg group2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg group3:*, reg group4:V, reg identical:cls, reg r4:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg as_list:cls, reg group5:*, reg group6:V, reg p:p(V +), reg r9:V, reg group7:*, reg group8:V |
    mkenv;
    st group = group;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L8() else L1();
  L5():
    group1 = ld group;
    check L7() else D0();
  L6():
    r = dyn base(<sym group>);
    goto L0(r);
  D0():
    deopt 1 [group1];
  L1():
    group7 = ld group;
    check L21() else D6();
  L7():
    group2 = force? group1;
    checkMissing(group2);
    c = `is.character`(group2);
    goto L0(c);
  L8():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D6():
    deopt 26 [group7];
  L2(r3):
    c2 = `as.logical`(r3);
    if c2 then L13() else L3();
  L9():
    group3 = ld group;
    check L11() else D1();
  L10():
    r2 = dyn base1(<sym group>, "");
    goto L2(r2);
  L21():
    group8 = force? group7;
    checkMissing(group8);
    popenv;
    return group8;
  D1():
    deopt 6 [group3];
  L3():
    as_list = ldf `as.list`;
    check L18() else D4();
  L11():
    group4 = force? group3;
    checkMissing(group4);
    identical = ldf identical in base;
    r4 = dyn identical(group4, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L12() else D2();
  L13():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  D2():
    deopt 17 [r4];
  D4():
    deopt 23 [];
  L4(r6):
    popenv;
    return r6;
  L12():
    goto L2(r4);
  L14():
    list = ldf list in base;
    r7 = dyn list();
    check L16() else D3();
  L15():
    r5 = dyn base2();
    goto L4(r5);
  L18():
    p = prom<V +>{
      group5 = ld group;
      group6 = force? group5;
      checkMissing(group6);
      return group6;
    };
    r9 = dyn as_list(p);
    check L19() else D5();
  D3():
    deopt 21 [r7];
  D5():
    deopt 25 [r9];
  L16():
    goto L4(r7);
  L19():
    popenv;
    return r9;
  }
}