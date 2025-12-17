fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4266987626;
    st `.set_row_names` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg n3:*, reg n4:V, reg r3:V, reg c1:cls, reg r4:V, reg integer:cls, reg r5:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L2() else D0();
  D0():
    deopt 0 [n1];
  L2():
    n2 = force? n1;
    checkMissing(n2);
    r = `>`(n2, 0.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    integer = ldf integer;
    check L9() else D3();
  L3():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  D3():
    deopt 13 [];
  L1(r2):
    popenv;
    return r2;
  L4():
    n3 = ld n;
    check L6() else D1();
  L5():
    r1 = dyn base(NA_INT, <lang `-`(n)>);
    goto L1(r1);
  L9():
    r5 = dyn integer();
    check L10() else D4();
  D1():
    deopt 7 [n3];
  D4():
    deopt 14 [r5];
  L6():
    n4 = force? n3;
    checkMissing(n4);
    r3 = `-`(<missing>, n4);
    c1 = ldf c in base;
    r4 = dyn c1(NA_INT, r3);
    check L7() else D2();
  L10():
    popenv;
    return r5;
  D2():
    deopt 11 [r4];
  L7():
    goto L1(r4);
  }
}