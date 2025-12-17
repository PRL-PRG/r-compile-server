fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `file.remove` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg ddd1:dots?, reg r4:V, reg file_remove:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang file.remove(c(...))>);
    goto L0(r);
  L1(r3):
    file_remove = ldf `file.remove` in base;
    r5 = dyn file_remove(r3);
    check L8() else D2();
  L4():
    c = ldf c;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym ...>);
    goto L1(r2);
  D0():
    deopt 4 [];
  D2():
    deopt 8 [r5];
  L6():
    ddd1 = ld `...`;
    r4 = dyn c[`...`](ddd1);
    check L7() else D1();
  L8():
    goto L0(r5);
  D1():
    deopt 6 [r4];
  L7():
    goto L1(r4);
  }
}